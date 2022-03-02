#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void cacherLesLogs();
    void setTitres();

private slots:

    void on_pushButtonActiver_clicked();

    void on_tableWidgetProducteurs_cellClicked(int row, int column);

    void on_pushButtonDesactiver_clicked();

private:
    Ui::MainWindow *ui;
    QString idAdmin;
};

#endif // MAINWINDOW_H
