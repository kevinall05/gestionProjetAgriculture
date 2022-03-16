/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelBienvenue;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelTypeUtil;
    QSpacerItem *horizontalSpacer_8;
    QTabWidget *tabWidget;
    QWidget *tabProducteurs;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidgetProducteurs;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label;
    QLineEdit *lineEditProducteurNom;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_2;
    QLineEdit *lineEditProducteurPrenom;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_3;
    QLineEdit *lineEditProducteurAdresse;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_4;
    QLineEdit *lineEditProducteurEmail;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_5;
    QLineEdit *lineEditProducteurTelephone;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonProducteurModif;
    QPushButton *pushButtonDesactiver;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tabProducteursEnAttente;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidgetActivationProducteur;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pushButtonActiver;
    QSpacerItem *horizontalSpacer_19;
    QWidget *tabRayons;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidgetRayons;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_6;
    QLineEdit *lineEditLibelleRayon;
    QLabel *labelPhoto;
    QPushButton *pushButtonChoisirImg;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonAjtRayon;
    QPushButton *pushButtonModifRayon;
    QPushButton *pushButtonSupprRayon;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tabVarietes;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidgetVarietes;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_8;
    QLineEdit *lineEditVariete;
    QSpacerItem *horizontalSpacer_27;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_26;
    QLabel *label_7;
    QComboBox *comboBoxVarieteRayon;
    QSpacerItem *horizontalSpacer_25;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *pushButtonAjtVariete;
    QPushButton *pushButtonModifVariete;
    QPushButton *pushButtonSupprVariete;
    QSpacerItem *horizontalSpacer_23;
    QWidget *tabProduits;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *tableWidgetProduits;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_30;
    QPushButton *pushButtonModifVariete_2;
    QPushButton *pushButtonSupprVariete_2;
    QSpacerItem *horizontalSpacer_29;
    QWidget *tabHistorique;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tableWidgetHistProducteurs;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(941, 776);
        QFont font;
        MainWindow->setFont(font);
        MainWindow->setFocusPolicy(Qt::TabFocus);
        MainWindow->setStyleSheet(QLatin1String("QLineEdit { \n"
"	border: 1px solid black;\n"
"	border-radius: 2px;\n"
"}"));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelBienvenue = new QLabel(centralWidget);
        labelBienvenue->setObjectName(QStringLiteral("labelBienvenue"));

        horizontalLayout->addWidget(labelBienvenue);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        labelTypeUtil = new QLabel(centralWidget);
        labelTypeUtil->setObjectName(QStringLiteral("labelTypeUtil"));

        horizontalLayout_4->addWidget(labelTypeUtil);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tabProducteurs = new QWidget();
        tabProducteurs->setObjectName(QStringLiteral("tabProducteurs"));
        tabProducteurs->setMouseTracking(false);
        verticalLayout_3 = new QVBoxLayout(tabProducteurs);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidgetProducteurs = new QTableWidget(tabProducteurs);
        tableWidgetProducteurs->setObjectName(QStringLiteral("tableWidgetProducteurs"));
        tableWidgetProducteurs->setLayoutDirection(Qt::LeftToRight);
        tableWidgetProducteurs->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProducteurs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProducteurs->setTextElideMode(Qt::ElideMiddle);
        tableWidgetProducteurs->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableWidgetProducteurs);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        label = new QLabel(tabProducteurs);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEditProducteurNom = new QLineEdit(tabProducteurs);
        lineEditProducteurNom->setObjectName(QStringLiteral("lineEditProducteurNom"));

        horizontalLayout_5->addWidget(lineEditProducteurNom);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        label_2 = new QLabel(tabProducteurs);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEditProducteurPrenom = new QLineEdit(tabProducteurs);
        lineEditProducteurPrenom->setObjectName(QStringLiteral("lineEditProducteurPrenom"));

        horizontalLayout_6->addWidget(lineEditProducteurPrenom);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        label_3 = new QLabel(tabProducteurs);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        lineEditProducteurAdresse = new QLineEdit(tabProducteurs);
        lineEditProducteurAdresse->setObjectName(QStringLiteral("lineEditProducteurAdresse"));

        horizontalLayout_7->addWidget(lineEditProducteurAdresse);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        label_4 = new QLabel(tabProducteurs);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        lineEditProducteurEmail = new QLineEdit(tabProducteurs);
        lineEditProducteurEmail->setObjectName(QStringLiteral("lineEditProducteurEmail"));

        horizontalLayout_8->addWidget(lineEditProducteurEmail);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);

        label_5 = new QLabel(tabProducteurs);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        lineEditProducteurTelephone = new QLineEdit(tabProducteurs);
        lineEditProducteurTelephone->setObjectName(QStringLiteral("lineEditProducteurTelephone"));

        horizontalLayout_9->addWidget(lineEditProducteurTelephone);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonProducteurModif = new QPushButton(tabProducteurs);
        pushButtonProducteurModif->setObjectName(QStringLiteral("pushButtonProducteurModif"));

        horizontalLayout_3->addWidget(pushButtonProducteurModif);

        pushButtonDesactiver = new QPushButton(tabProducteurs);
        pushButtonDesactiver->setObjectName(QStringLiteral("pushButtonDesactiver"));

        horizontalLayout_3->addWidget(pushButtonDesactiver);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tabWidget->addTab(tabProducteurs, QString());
        tabProducteursEnAttente = new QWidget();
        tabProducteursEnAttente->setObjectName(QStringLiteral("tabProducteursEnAttente"));
        verticalLayout_6 = new QVBoxLayout(tabProducteursEnAttente);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tableWidgetActivationProducteur = new QTableWidget(tabProducteursEnAttente);
        tableWidgetActivationProducteur->setObjectName(QStringLiteral("tableWidgetActivationProducteur"));
        tableWidgetActivationProducteur->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetActivationProducteur->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetActivationProducteur->verticalHeader()->setVisible(false);

        verticalLayout_6->addWidget(tableWidgetActivationProducteur);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        pushButtonActiver = new QPushButton(tabProducteursEnAttente);
        pushButtonActiver->setObjectName(QStringLiteral("pushButtonActiver"));

        horizontalLayout_10->addWidget(pushButtonActiver);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_19);


        verticalLayout_6->addLayout(horizontalLayout_10);

        tabWidget->addTab(tabProducteursEnAttente, QString());
        tabRayons = new QWidget();
        tabRayons->setObjectName(QStringLiteral("tabRayons"));
        verticalLayout_2 = new QVBoxLayout(tabRayons);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidgetRayons = new QTableWidget(tabRayons);
        tableWidgetRayons->setObjectName(QStringLiteral("tableWidgetRayons"));
        tableWidgetRayons->setMinimumSize(QSize(0, 0));
        tableWidgetRayons->setFrameShape(QFrame::StyledPanel);
        tableWidgetRayons->setFrameShadow(QFrame::Sunken);
        tableWidgetRayons->setLineWidth(5);
        tableWidgetRayons->setMidLineWidth(0);
        tableWidgetRayons->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetRayons->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetRayons->setShowGrid(true);
        tableWidgetRayons->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableWidgetRayons);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_22);

        label_6 = new QLabel(tabRayons);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_11->addWidget(label_6);

        lineEditLibelleRayon = new QLineEdit(tabRayons);
        lineEditLibelleRayon->setObjectName(QStringLiteral("lineEditLibelleRayon"));

        horizontalLayout_11->addWidget(lineEditLibelleRayon);

        labelPhoto = new QLabel(tabRayons);
        labelPhoto->setObjectName(QStringLiteral("labelPhoto"));

        horizontalLayout_11->addWidget(labelPhoto);

        pushButtonChoisirImg = new QPushButton(tabRayons);
        pushButtonChoisirImg->setObjectName(QStringLiteral("pushButtonChoisirImg"));

        horizontalLayout_11->addWidget(pushButtonChoisirImg);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        pushButtonAjtRayon = new QPushButton(tabRayons);
        pushButtonAjtRayon->setObjectName(QStringLiteral("pushButtonAjtRayon"));

        horizontalLayout_2->addWidget(pushButtonAjtRayon);

        pushButtonModifRayon = new QPushButton(tabRayons);
        pushButtonModifRayon->setObjectName(QStringLiteral("pushButtonModifRayon"));

        horizontalLayout_2->addWidget(pushButtonModifRayon);

        pushButtonSupprRayon = new QPushButton(tabRayons);
        pushButtonSupprRayon->setObjectName(QStringLiteral("pushButtonSupprRayon"));

        horizontalLayout_2->addWidget(pushButtonSupprRayon);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(tabRayons, QString());
        tabVarietes = new QWidget();
        tabVarietes->setObjectName(QStringLiteral("tabVarietes"));
        verticalLayout_4 = new QVBoxLayout(tabVarietes);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableWidgetVarietes = new QTableWidget(tabVarietes);
        tableWidgetVarietes->setObjectName(QStringLiteral("tableWidgetVarietes"));
        tableWidgetVarietes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetVarietes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetVarietes->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableWidgetVarietes);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_28);

        label_8 = new QLabel(tabVarietes);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_14->addWidget(label_8);

        lineEditVariete = new QLineEdit(tabVarietes);
        lineEditVariete->setObjectName(QStringLiteral("lineEditVariete"));

        horizontalLayout_14->addWidget(lineEditVariete);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_27);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_26);

        label_7 = new QLabel(tabVarietes);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_13->addWidget(label_7);

        comboBoxVarieteRayon = new QComboBox(tabVarietes);
        comboBoxVarieteRayon->setObjectName(QStringLiteral("comboBoxVarieteRayon"));

        horizontalLayout_13->addWidget(comboBoxVarieteRayon);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_25);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_24);

        pushButtonAjtVariete = new QPushButton(tabVarietes);
        pushButtonAjtVariete->setObjectName(QStringLiteral("pushButtonAjtVariete"));

        horizontalLayout_12->addWidget(pushButtonAjtVariete);

        pushButtonModifVariete = new QPushButton(tabVarietes);
        pushButtonModifVariete->setObjectName(QStringLiteral("pushButtonModifVariete"));

        horizontalLayout_12->addWidget(pushButtonModifVariete);

        pushButtonSupprVariete = new QPushButton(tabVarietes);
        pushButtonSupprVariete->setObjectName(QStringLiteral("pushButtonSupprVariete"));

        horizontalLayout_12->addWidget(pushButtonSupprVariete);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_23);


        verticalLayout_4->addLayout(horizontalLayout_12);

        tabWidget->addTab(tabVarietes, QString());
        tabProduits = new QWidget();
        tabProduits->setObjectName(QStringLiteral("tabProduits"));
        verticalLayout_5 = new QVBoxLayout(tabProduits);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tableWidgetProduits = new QTableWidget(tabProduits);
        tableWidgetProduits->setObjectName(QStringLiteral("tableWidgetProduits"));
        tableWidgetProduits->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProduits->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProduits->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(tableWidgetProduits);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_30);

        pushButtonModifVariete_2 = new QPushButton(tabProduits);
        pushButtonModifVariete_2->setObjectName(QStringLiteral("pushButtonModifVariete_2"));

        horizontalLayout_15->addWidget(pushButtonModifVariete_2);

        pushButtonSupprVariete_2 = new QPushButton(tabProduits);
        pushButtonSupprVariete_2->setObjectName(QStringLiteral("pushButtonSupprVariete_2"));

        horizontalLayout_15->addWidget(pushButtonSupprVariete_2);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_29);


        verticalLayout_5->addLayout(horizontalLayout_15);

        tabWidget->addTab(tabProduits, QString());
        tabHistorique = new QWidget();
        tabHistorique->setObjectName(QStringLiteral("tabHistorique"));
        verticalLayout_7 = new QVBoxLayout(tabHistorique);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tableWidgetHistProducteurs = new QTableWidget(tabHistorique);
        tableWidgetHistProducteurs->setObjectName(QStringLiteral("tableWidgetHistProducteurs"));
        tableWidgetHistProducteurs->verticalHeader()->setVisible(false);

        verticalLayout_7->addWidget(tableWidgetHistProducteurs);

        tabWidget->addTab(tabHistorique, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 941, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion projetAgriculture", nullptr));
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
        labelBienvenue->setText(QApplication::translate("MainWindow", "Bienvenue", nullptr));
        labelTypeUtil->setText(QApplication::translate("MainWindow", "Vous \303\252tes un ", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nom: ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Pr\303\251nom:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Adresse:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Email:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone:", nullptr));
        pushButtonProducteurModif->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        pushButtonDesactiver->setText(QApplication::translate("MainWindow", "&D\303\251sactiver", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabProducteurs), QApplication::translate("MainWindow", "Tous les producteurs", nullptr));
        pushButtonActiver->setText(QApplication::translate("MainWindow", "&Activer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabProducteursEnAttente), QApplication::translate("MainWindow", "Producteurs en attente", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Libell\303\251 :", nullptr));
        labelPhoto->setText(QApplication::translate("MainWindow", "Photo", nullptr));
        pushButtonChoisirImg->setText(QApplication::translate("MainWindow", "Choisir", nullptr));
        pushButtonAjtRayon->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButtonModifRayon->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        pushButtonSupprRayon->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabRayons), QApplication::translate("MainWindow", "Rayons", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Libell\303\251 :", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Appartient au rayon :", nullptr));
        pushButtonAjtVariete->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        pushButtonModifVariete->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        pushButtonSupprVariete->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabVarietes), QApplication::translate("MainWindow", "Vari\303\251t\303\251s", nullptr));
        pushButtonModifVariete_2->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        pushButtonSupprVariete_2->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabProduits), QApplication::translate("MainWindow", "Produits", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabHistorique), QApplication::translate("MainWindow", "Historique", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
