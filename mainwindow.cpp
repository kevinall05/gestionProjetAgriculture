
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexion.h"
#include <QSqlQuery>
#include <QDebug>

/**
 * @brief MainWindow::MainWindow
 * Constructeur de la MainWindow
 * @param noProd : Id de l'utilisateur
 * @param parent
 */
MainWindow::MainWindow(QString noProd,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    idAdmin=noProd;

    // QTableWidget responsive
    ui->tableWidgetRayons->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetVarietes->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetProduits->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // on charge ce qu'on a besoin
    chargerInfos();
    chargerLesRayons();
    chargerLesVarietes();
    chargerLesProducteurs();
    chargerLesProduits();
}

/**
 * @brief MainWindow::~MainWindow
 * Destructeur de la MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::setIdProd
 * Cette méthode permet de récupérer l'id de l'utilisateur via l'identifiant de la fenêtre connexion
 * @param lIdAdmin
 */
void MainWindow::setIdProd(QString lIdAdmin)
{
    qDebug()<<"void MainWindow::setIdProd(QString lIdAdmin)";
    idAdmin=lIdAdmin;
}

/**
 * @brief MainWindow::chargerInfos
 * Cette méthode permet de charger les informations concernant l'utilisateur connecté
 */
void MainWindow::chargerInfos()
{
    // on va charger les différentes informations
    QString txtRequeteAdmin = "SELECT nom,prenom,Utilisateur.numeroTypeUtilisateur,TypeUtilisateur.libelleTypeUtilisateur "
                              "FROM Utilisateur "
                              "INNER JOIN TypeUtilisateur ON TypeUtilisateur.numeroTypeUtilisateur=Utilisateur.numeroTypeUtilisateur "
                              "WHERE login = "+idAdmin;

    // on fait la requête
    QSqlQuery requeteAdmin(txtRequeteAdmin);
    requeteAdmin.first();

    // informations de l'admin
    QString nom = requeteAdmin.value("nom").toString();
    QString prenom = requeteAdmin.value("prenom").toString();
    QString typeUtil = requeteAdmin.value("TypeUtilisateur.libelleTypeUtilisateur").toString();


    ui->labelBienvenue->setText(ui->labelBienvenue->text()+" <b>"+nom+" " +prenom+"</b>");
    ui->labelTypeUtil->setText(ui->labelTypeUtil->text()+ "<b>" +typeUtil+ "</b>");
}

/**
 * @brief MainWindow::chargerLesRayons
 * Cette méthode permet de charger les rayons dans la QTableWidget
 */
void MainWindow::chargerLesRayons()
{
    // on récupère tous les rayons
    int compteur = 0;

    QString txtRequeteRayons = "SELECT numeroRayon,libelleRayon,imgRayon FROM Rayon";
    QSqlQuery requeteRayons(txtRequeteRayons);

    while(requeteRayons.next()) {
        ui->tableWidgetRayons->insertRow(compteur);
        ui->tableWidgetRayons->setItem(compteur,0,new QTableWidgetItem(requeteRayons.value("numeroRayon").toString()));
        ui->tableWidgetRayons->setItem(compteur,1,new QTableWidgetItem(requeteRayons.value("libelleRayon").toString()));
        ui->tableWidgetRayons->setItem(compteur,2,new QTableWidgetItem(requeteRayons.value("imgRayon").toString()));

        compteur++;
    }
}

void MainWindow::chargerLesVarietes()
{
    // on récupère toutes les variétés
    int compteur = 0;

    QString txtRequeteVarietes = "SELECT numeroVarieteProduit,libelleVarieteProduit,libelleRayon "
                                 "FROM VarieteProduit "
                                 "INNER JOIN Rayon ON Rayon.numeroRayon = VarieteProduit.numeroRayon";
    QSqlQuery requeteVarietes(txtRequeteVarietes);

    while(requeteVarietes.next()) {
        ui->tableWidgetVarietes->insertRow(compteur);
        ui->tableWidgetVarietes->setItem(compteur,0,new QTableWidgetItem(requeteVarietes.value("numeroVarieteProduit").toString()));
        ui->tableWidgetVarietes->setItem(compteur,1,new QTableWidgetItem(requeteVarietes.value("libelleVarieteProduit").toString()));
        ui->tableWidgetVarietes->setItem(compteur,2,new QTableWidgetItem(requeteVarietes.value("libelleRayon").toString()));

        compteur++;
    }
}

void MainWindow::chargerLesProducteurs()
{
    // on récupère les producteurs
    int compteur = 0;

    QString txtRequeteProducteurs = "SELECT numeroProducteur,nomProducteur,prenomProducteur,adresseProducteur,mailProducteur,telProducteur,numeroAbonnement "
                                    "FROM Producteur";
    QSqlQuery requeteProducteurs(txtRequeteProducteurs);

    while(requeteProducteurs.next()) {
        ui->tableWidgetProducteurs->insertRow(compteur);
        ui->tableWidgetProducteurs->setItem(compteur,0,new QTableWidgetItem(requeteProducteurs.value("numeroProducteur").toString()));
        ui->tableWidgetProducteurs->setItem(compteur,1,new QTableWidgetItem(requeteProducteurs.value("nomProducteur").toString()));
        ui->tableWidgetProducteurs->setItem(compteur,2,new QTableWidgetItem(requeteProducteurs.value("prenomProducteur").toString()));
        ui->tableWidgetProducteurs->setItem(compteur,3,new QTableWidgetItem(requeteProducteurs.value("adresseProducteur").toString()));
        ui->tableWidgetProducteurs->setItem(compteur,4,new QTableWidgetItem(requeteProducteurs.value("mailProducteur").toString()));
        ui->tableWidgetProducteurs->setItem(compteur,5,new QTableWidgetItem(requeteProducteurs.value("telProducteur").toString()));
        ui->tableWidgetProducteurs->setItem(compteur,6,new QTableWidgetItem(requeteProducteurs.value("numeroAbonnement").toString()));


        compteur++;
    }
}

void MainWindow::chargerLesProduits()
{
    // on récupère les produits
    int compteur = 0;

    QString txtRequeteProduits = "SELECT numeroProduit,nomProduit,infosProduit,srcImgProduit,libelleVarieteProduit "
                                 "FROM Produit "
                                 "INNER JOIN VarieteProduit ON VarieteProduit.numeroVarieteProduit = Produit.numeroProduit";
    QSqlQuery requeteProduits(txtRequeteProduits);

    while(requeteProduits.next()) {
        ui->tableWidgetProduits->insertRow(compteur);
        ui->tableWidgetProduits->setItem(compteur,0,new QTableWidgetItem(requeteProduits.value("numeroProduit").toString()));
        ui->tableWidgetProduits->setItem(compteur,1,new QTableWidgetItem(requeteProduits.value("nomProduit").toString()));
        ui->tableWidgetProduits->setItem(compteur,2,new QTableWidgetItem(requeteProduits.value("srcImgProduit").toString()));
        ui->tableWidgetProduits->setItem(compteur,3,new QTableWidgetItem(requeteProduits.value("libelleVarieteProduit").toString()));
        ui->tableWidgetProduits->setItem(compteur,4,new QTableWidgetItem(requeteProduits.value("infosProduit").toString()));

        compteur++;
    }
}

