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

    // on désactive les boutons pour éviter des problèmes
    ui->pushButtonActiver->setEnabled(false);
    ui->pushButtonDesactiver->setEnabled(false);

    // on charge les titres
    setTitres();

    // on vérifie si on cache les logs
    cacherLesLogs();
    chargerLesLogs();

    // QTableWidget responsive
    ui->tableWidgetRayons->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetVarietes->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetProduits->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetActivationProducteur->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetProducteurs->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetHistProducteurs->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // on charge ce qu'on a besoin
    chargerInfos();
    chargerLesRayons();
    chargerLesVarietes();
    chargerLesProducteurs();
    chargerLesProducteursEnAttente();
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
                              "WHERE login = '"+idAdmin+"'";

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

    QString txtRequeteProducteurs = "SELECT numeroProducteur,nomProducteur,prenomProducteur,adresseProducteur,mailProducteur,telProducteur,numeroAbonnement,estActif "
                                    "FROM Producteur "
                                    "WHERE estActif = 'O'";
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

void MainWindow::chargerLesProducteursEnAttente()
{
    // on récupère les producteurs
    int compteur = 0;

    QString txtRequeteProducteurs = "SELECT numeroProducteur,nomProducteur,prenomProducteur,adresseProducteur,mailProducteur,telProducteur,estActif "
                                    "FROM Producteur "
                                    "WHERE estActif = 'N'";
    QSqlQuery requeteProducteurs(txtRequeteProducteurs);

    while(requeteProducteurs.next()) {
        ui->tableWidgetActivationProducteur->insertRow(compteur);
        ui->tableWidgetActivationProducteur->setItem(compteur,0,new QTableWidgetItem(requeteProducteurs.value("numeroProducteur").toString()));
        ui->tableWidgetActivationProducteur->setItem(compteur,1,new QTableWidgetItem(requeteProducteurs.value("nomProducteur").toString()));
        ui->tableWidgetActivationProducteur->setItem(compteur,2,new QTableWidgetItem(requeteProducteurs.value("prenomProducteur").toString()));
        ui->tableWidgetActivationProducteur->setItem(compteur,3,new QTableWidgetItem(requeteProducteurs.value("adresseProducteur").toString()));
        ui->tableWidgetActivationProducteur->setItem(compteur,4,new QTableWidgetItem(requeteProducteurs.value("mailProducteur").toString()));
        ui->tableWidgetActivationProducteur->setItem(compteur,5,new QTableWidgetItem(requeteProducteurs.value("telProducteur").toString()));
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

void MainWindow::chargerLesLogs()
{
    qDebug()<<"void MainWindow::chargerLesLogs()";

    // on charge les logs
    QString txtChargerLogs = "SELECT idHistProd, dateAction, heureAction, actionEffectue, nomUtil FROM historique";
    QSqlQuery chargerLogs(txtChargerLogs);

    int compteur = 0;

    // on affiche les logs dans un tableau
    while(chargerLogs.next()) {
        ui->tableWidgetHistProducteurs->insertRow(compteur);
        ui->tableWidgetHistProducteurs->setItem(compteur,0,new QTableWidgetItem(chargerLogs.value("idHistProd").toString()));
        ui->tableWidgetHistProducteurs->setItem(compteur,1,new QTableWidgetItem(chargerLogs.value("dateAction").toString()+ " " + chargerLogs.value("heureAction").toString()));
        ui->tableWidgetHistProducteurs->setItem(compteur,2,new QTableWidgetItem(chargerLogs.value("actionEffectue").toString()));
        ui->tableWidgetHistProducteurs->setItem(compteur,3,new QTableWidgetItem(chargerLogs.value("nomUtil").toString()));

        compteur ++;
    }

}

void MainWindow::cacherLesLogs()
{
    qDebug()<<"void MainWindow::cacherLesLogs()";

    // on vérifie le grade de l'utilisateur
    QString txtRequeteVerif = "SELECT Utilisateur.numeroTypeUtilisateur,TypeUtilisateur.libelleTypeUtilisateur "
                              "FROM Utilisateur "
                              "INNER JOIN TypeUtilisateur ON TypeUtilisateur.numeroTypeUtilisateur=Utilisateur.numeroTypeUtilisateur "
                              "WHERE login = '"+idAdmin+"'";

    QSqlQuery requeteVerif(txtRequeteVerif);
    // on exécute la requête
    requeteVerif.first();

    // on vérifie si le numéro du typeUtilisateur est différent de 1
    if(requeteVerif.value("Utilisateur.numeroTypeUtilisateur").toInt() != 1) {
        // on cache les logs
        ui->tabWidget->removeTab(5);
    }
}

void MainWindow::setTitres()
{
    qDebug()<<"void MainWindow::setTitres()";
    // on va mettre les titres aux tableaux

    // Producteurs
    QStringList headersProducteurs;
    headersProducteurs << "Numéro" << "Nom" << "Prénom" << "Adresse" << "E-mail" << "Téléphone";
    ui->tableWidgetProducteurs->setColumnCount(headersProducteurs.count());
    ui->tableWidgetProducteurs->setHorizontalHeaderLabels(headersProducteurs);

    // Producteurs en attente
    QStringList headersProducteursEnAttente;
    headersProducteursEnAttente << "Numéro" << "Nom" << "Prénom" << "Adresse" << "E-mail" << "Téléphone";
    ui->tableWidgetActivationProducteur->setColumnCount(headersProducteursEnAttente.count());
    ui->tableWidgetActivationProducteur->setHorizontalHeaderLabels(headersProducteursEnAttente);

    // Rayons
    QStringList headersRayons;
    headersRayons << "Numéro" << "Libellé";
    ui->tableWidgetRayons->setColumnCount(headersRayons.count());
    ui->tableWidgetRayons->setHorizontalHeaderLabels(headersRayons);

    // Variétés des produits
    QStringList headersVarietes;
    headersVarietes << "Numéro" << "Libellé" << "Appartient au rayon";
    ui->tableWidgetVarietes->setColumnCount(headersVarietes.count());
    ui->tableWidgetVarietes->setHorizontalHeaderLabels(headersVarietes);

    // Rayons
    QStringList headersProduits;
    headersProduits << "Numéro" << "Nom" << "Lien de l'image" << "Appartient à la variété" << "Plus d'infos";
    ui->tableWidgetProduits->setColumnCount(headersProduits.count());
    ui->tableWidgetProduits->setHorizontalHeaderLabels(headersProduits);

    // Historique producteurs
    QStringList headersHistProducteurs;
    headersHistProducteurs << "Numéro" << "Date/heure" << "Action effectuée" << "Fait par";
    ui->tableWidgetHistProducteurs->setColumnCount(headersHistProducteurs.count());
    ui->tableWidgetHistProducteurs->setHorizontalHeaderLabels(headersHistProducteurs);
}


void MainWindow::on_pushButtonActiver_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonActiver_clicked()";
    // activation du producteur sélectionné

    // requête d'activation du producteur
    QString txtActivationProducteur("UPDATE Producteur "
                                    "SET estActif = 'O' "
                                    "WHERE numeroProducteur = "+ui->tableWidgetActivationProducteur->item(ui->tableWidgetActivationProducteur->currentRow(),0)->text());
    qDebug()<<txtActivationProducteur;
    QSqlQuery activationProducteur(txtActivationProducteur);

    QString txtMaxHistProd = "SELECT IFNULL(MAX(idHistProd)+1,1000) "
                             "FROM historique";
    QSqlQuery maxHistProd(txtMaxHistProd);
    maxHistProd.first();

    // requête pour stocker dans l'historique
    QString txtHistoriqueProducteur("INSERT INTO historique(idHistProd,dateAction,heureAction,actionEffectue,nomUtil) "
                                    "VALUES ("+maxHistProd.value(0).toString()+",DATE(NOW()),TIME(NOW()),'Activation du producteur n°"+ui->tableWidgetActivationProducteur->item(ui->tableWidgetActivationProducteur->currentRow(),0)->text()+" nommé "+ui->tableWidgetActivationProducteur->item(ui->tableWidgetActivationProducteur->currentRow(),1)->text()+" "+ui->tableWidgetActivationProducteur->item(ui->tableWidgetActivationProducteur->currentRow(),2)->text()+"','"+idAdmin+"')");
    QSqlQuery historiqueProducteur(txtHistoriqueProducteur);
    qDebug()<<txtHistoriqueProducteur;
    historiqueProducteur.exec();

    ui->tableWidgetActivationProducteur->clear();
    ui->tableWidgetActivationProducteur->setRowCount(0);

    ui->tableWidgetProducteurs->clear();
    ui->tableWidgetProducteurs->setRowCount(0);

    // on recharge les labels des tableaux
    setTitres();

    // on recharge les tableaux
    chargerLesProducteurs();
    chargerLesProducteursEnAttente();

    // on redésactive le bouton
    ui->pushButtonActiver->setEnabled(0);
}



void MainWindow::on_tableWidgetProducteurs_cellClicked(int row, int column)
{
    // on active le bouton
    ui->pushButtonDesactiver->setEnabled(1);
    // on récupère dans les zones de saisies les informations
    ui->lineEditProducteurNom->setText(ui->tableWidgetProducteurs->item(row,1)->text());
    ui->lineEditProducteurPrenom->setText(ui->tableWidgetProducteurs->item(row,2)->text());
    ui->lineEditProducteurAdresse->setText(ui->tableWidgetProducteurs->item(row,3)->text());
    ui->lineEditProducteurEmail->setText(ui->tableWidgetProducteurs->item(row,4)->text());
    ui->lineEditProducteurTelephone->setText(ui->tableWidgetProducteurs->item(row,5)->text());
}

void MainWindow::on_pushButtonDesactiver_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonDesactiver_clicked()";
    // désactivation du producteur sélectionné

    // requête d'désactivation du producteur
    QString txtDesactivationProducteur("UPDATE Producteur "
                                    "SET estActif = 'N' "
                                    "WHERE numeroProducteur = "+ui->tableWidgetProducteurs->item(ui->tableWidgetProducteurs->currentRow(),0)->text());
    qDebug()<<txtDesactivationProducteur;
    QSqlQuery activationProducteur(txtDesactivationProducteur);

    QString txtMaxHistProd = "SELECT IFNULL(MAX(idHistProd)+1,1000) "
                             "FROM historique";
    QSqlQuery maxHistProd(txtMaxHistProd);
    maxHistProd.first();
    qDebug()<<txtMaxHistProd;

    // requête pour stocker dans l'historique
    QString txtHistoriqueProducteur("INSERT INTO historique(idHistProd,dateAction,heureAction,actionEffectue,nomUtil) "
                                    "VALUES ("+maxHistProd.value(0).toString()+",DATE(NOW()),TIME(NOW()),'Désactivation du producteur n°"+ui->tableWidgetProducteurs->item(ui->tableWidgetProducteurs->currentRow(),0)->text()+" nommé "+ui->tableWidgetProducteurs->item(ui->tableWidgetProducteurs->currentRow(),1)->text()+" "+ui->tableWidgetProducteurs->item(ui->tableWidgetProducteurs->currentRow(),2)->text()+"','"+idAdmin+"')");
    QSqlQuery historiqueProducteur(txtHistoriqueProducteur);
    qDebug()<<txtHistoriqueProducteur;
    historiqueProducteur.exec();

    ui->tableWidgetActivationProducteur->clear();
    ui->tableWidgetActivationProducteur->setRowCount(0);

    ui->tableWidgetProducteurs->clear();
    ui->tableWidgetProducteurs->setRowCount(0);

    // on recharge les labels des tableaux
    setTitres();

    // on recharge les tableaux
    chargerLesProducteurs();
    chargerLesProducteursEnAttente();

    // on redésactive le bouton
    ui->pushButtonDesactiver->setEnabled(0);
}

void MainWindow::on_tableWidgetActivationProducteur_cellClicked(int row, int column)
{
    // on active le bouton Activer
    ui->pushButtonActiver->setEnabled(1);
}
