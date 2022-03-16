#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QCheckBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QString idProd,QWidget *parent = nullptr);
    ~MainWindow();
    void setIdProd(QString lIdAdmin);
    void chargerInfos();
    void chargerLesRayons();
    void chargerLesVarietes();
    void chargerLesProducteurs();
    void chargerLesProducteursEnAttente();
    void chargerLesProduits();
    void chargerLesLogs();
    void cacherLesLogs();
    void setTitres();
    void remplirComboBoxVariete();

private slots:

    void on_pushButtonActiver_clicked();

    void on_tableWidgetProducteurs_cellClicked(int row, int column);

    void on_pushButtonDesactiver_clicked();

    void on_tableWidgetActivationProducteur_cellClicked(int row, int column);

    void on_tableWidgetRayons_cellClicked(int row, int column);

    void on_pushButtonModifRayon_clicked();

    void on_pushButtonSupprRayon_clicked();

    void on_pushButtonAjtRayon_clicked();

    void on_pushButtonChoisirImg_clicked();

private:
    Ui::MainWindow *ui;
    QString idAdmin;

   QList<QString> listeNomRayonSuppr;
   QList<QCheckBox *> listeRayonSuppr;
};

#endif // MAINWINDOW_H
