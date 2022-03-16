/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Connexion
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *lineEditId;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *lineEditMdp;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonAnnuler;
    QPushButton *pushButtonSeConnecter;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QStringLiteral("Connexion"));
        Connexion->resize(400, 300);
        verticalLayout = new QVBoxLayout(Connexion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label = new QLabel(Connexion);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_6->addItem(verticalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(Connexion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setScaledContents(false);

        horizontalLayout->addWidget(label_2);

        lineEditId = new QLineEdit(Connexion);
        lineEditId->setObjectName(QStringLiteral("lineEditId"));

        horizontalLayout->addWidget(lineEditId);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(Connexion);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditMdp = new QLineEdit(Connexion);
        lineEditMdp->setObjectName(QStringLiteral("lineEditMdp"));
        lineEditMdp->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEditMdp);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButtonAnnuler = new QPushButton(Connexion);
        pushButtonAnnuler->setObjectName(QStringLiteral("pushButtonAnnuler"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/img/annuler.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAnnuler->setIcon(icon);
        pushButtonAnnuler->setIconSize(QSize(16, 16));
        pushButtonAnnuler->setAutoDefault(false);

        horizontalLayout_4->addWidget(pushButtonAnnuler);

        pushButtonSeConnecter = new QPushButton(Connexion);
        pushButtonSeConnecter->setObjectName(QStringLiteral("pushButtonSeConnecter"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/img/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSeConnecter->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButtonSeConnecter);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Connexion);

        pushButtonSeConnecter->setDefault(true);


        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QDialog *Connexion)
    {
        Connexion->setWindowTitle(QApplication::translate("Connexion", "Gestion projetAgriculture |\302\240Se connecter", nullptr));
        label->setText(QApplication::translate("Connexion", "Connexion", nullptr));
        label_2->setText(QApplication::translate("Connexion", "Identifiant :", nullptr));
        lineEditId->setText(QApplication::translate("Connexion", "Admin", nullptr));
        label_3->setText(QApplication::translate("Connexion", "Mot de passe :", nullptr));
        lineEditMdp->setText(QApplication::translate("Connexion", "Admin", nullptr));
        pushButtonAnnuler->setText(QApplication::translate("Connexion", "Annuler", nullptr));
        pushButtonSeConnecter->setText(QApplication::translate("Connexion", "Se connecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
