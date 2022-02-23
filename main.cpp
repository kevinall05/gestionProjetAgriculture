#include "mainwindow.h"
#include "connexion.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // connexion à la base de données
    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("localhost");
    maBase.setDatabaseName("projetAgriculture");
    maBase.setUserName("AgricultKevin");
    maBase.setPassword("elini01");

    // ouverture de la base
    bool ok = maBase.open();
    qDebug()<<ok;

    // si l'utilisateur est connecté, on ouvre la MainWindow
    Connexion seConnecter;
     if(seConnecter.exec()==QDialog::Accepted)
     {
         qDebug()<<"ouverture de la MainWindow";
         MainWindow w(seConnecter.getIdProd());
         qDebug()<<seConnecter.getIdProd();
         w.show();
         return a.exec();
     }
     else {
         return 20;
     }
}
