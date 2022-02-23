#include "connexion.h"
#include "ui_connexion.h"
#include <QDebug>
#include <QSqlQuery>

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
}

Connexion::~Connexion()
{
    delete ui;
}

QString Connexion::getIdProd()
{
    return ui->lineEditId->text();
}

void Connexion::on_pushButtonAnnuler_clicked()
{
    reject();
}


void Connexion::on_pushButtonSeConnecter_clicked()
{
    // on va récupérer les informations
    qDebug()<<"connexion ok";
    QString txtRequeteConnexion = "SELECT COUNT(*) "
                                  "FROM Utilisateur "
                                  "WHERE login ="+ui->lineEditId->text() + " "
                                  "AND motDePasse = PASSWORD('"+ ui->lineEditMdp->text() +"')";
    QSqlQuery requeteConnexion(txtRequeteConnexion);
    qDebug()<<txtRequeteConnexion;

    // on fait notre requête
    requeteConnexion.first();

    // on récupère les informations
    int testConnexion = requeteConnexion.value(0).toInt();

    if(testConnexion>0) {
        // on renvoie à la MainWindow que l'utilisateur est connecté
        accept();
    } else {
}

}
