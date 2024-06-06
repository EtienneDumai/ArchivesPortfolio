/********************************************************************************
** Form generated from reading UI file 'fenetreapropos.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREAPROPOS_H
#define UI_FENETREAPROPOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fenetreAPropos
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layoutTitre;
    QSpacerItem *horizontalSpacer;
    QLabel *titrePpal;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *layoutInfos;
    QLabel *titreVersion;
    QLabel *titreAuteurs;
    QLabel *titreDateC;
    QLabel *version;
    QLabel *dateC;
    QVBoxLayout *LayoutAuteurs;
    QLabel *auteur1;
    QLabel *auteur2;
    QLabel *auteur3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnOk;

    void setupUi(QDialog *fenetreAPropos)
    {
        if (fenetreAPropos->objectName().isEmpty())
            fenetreAPropos->setObjectName("fenetreAPropos");
        fenetreAPropos->resize(749, 288);
        verticalLayout = new QVBoxLayout(fenetreAPropos);
        verticalLayout->setObjectName("verticalLayout");
        layoutTitre = new QHBoxLayout();
        layoutTitre->setObjectName("layoutTitre");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layoutTitre->addItem(horizontalSpacer);

        titrePpal = new QLabel(fenetreAPropos);
        titrePpal->setObjectName("titrePpal");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        titrePpal->setFont(font);

        layoutTitre->addWidget(titrePpal);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layoutTitre->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(layoutTitre);

        layoutInfos = new QGridLayout();
        layoutInfos->setObjectName("layoutInfos");
        titreVersion = new QLabel(fenetreAPropos);
        titreVersion->setObjectName("titreVersion");

        layoutInfos->addWidget(titreVersion, 0, 0, 1, 1);

        titreAuteurs = new QLabel(fenetreAPropos);
        titreAuteurs->setObjectName("titreAuteurs");

        layoutInfos->addWidget(titreAuteurs, 2, 0, 1, 1);

        titreDateC = new QLabel(fenetreAPropos);
        titreDateC->setObjectName("titreDateC");

        layoutInfos->addWidget(titreDateC, 1, 0, 1, 1);

        version = new QLabel(fenetreAPropos);
        version->setObjectName("version");

        layoutInfos->addWidget(version, 0, 1, 1, 1);

        dateC = new QLabel(fenetreAPropos);
        dateC->setObjectName("dateC");

        layoutInfos->addWidget(dateC, 1, 1, 1, 1);

        LayoutAuteurs = new QVBoxLayout();
        LayoutAuteurs->setObjectName("LayoutAuteurs");
        auteur1 = new QLabel(fenetreAPropos);
        auteur1->setObjectName("auteur1");

        LayoutAuteurs->addWidget(auteur1);

        auteur2 = new QLabel(fenetreAPropos);
        auteur2->setObjectName("auteur2");

        LayoutAuteurs->addWidget(auteur2);

        auteur3 = new QLabel(fenetreAPropos);
        auteur3->setObjectName("auteur3");

        LayoutAuteurs->addWidget(auteur3);


        layoutInfos->addLayout(LayoutAuteurs, 2, 1, 1, 1);


        verticalLayout->addLayout(layoutInfos);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btnOk = new QPushButton(fenetreAPropos);
        btnOk->setObjectName("btnOk");
        btnOk->setAutoDefault(false);

        verticalLayout_2->addWidget(btnOk);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(fenetreAPropos);

        QMetaObject::connectSlotsByName(fenetreAPropos);
    } // setupUi

    void retranslateUi(QDialog *fenetreAPropos)
    {
        fenetreAPropos->setWindowTitle(QCoreApplication::translate("fenetreAPropos", "A propos", nullptr));
        titrePpal->setText(QCoreApplication::translate("fenetreAPropos", "Informations sur l'application", nullptr));
        titreVersion->setText(QCoreApplication::translate("fenetreAPropos", "Version de l'application : ", nullptr));
        titreAuteurs->setText(QCoreApplication::translate("fenetreAPropos", "Auteurs", nullptr));
        titreDateC->setText(QCoreApplication::translate("fenetreAPropos", "Date de cr\303\251ation : ", nullptr));
        version->setText(QCoreApplication::translate("fenetreAPropos", "V3 MVP", nullptr));
        dateC->setText(QCoreApplication::translate("fenetreAPropos", "3 avril 2024", nullptr));
        auteur1->setText(QCoreApplication::translate("fenetreAPropos", "BARLIC Fran\303\247ois", nullptr));
        auteur2->setText(QCoreApplication::translate("fenetreAPropos", "BOURCIEZ Maxime", nullptr));
        auteur3->setText(QCoreApplication::translate("fenetreAPropos", "DUMAI Etienne", nullptr));
        btnOk->setText(QCoreApplication::translate("fenetreAPropos", "Terminer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fenetreAPropos: public Ui_fenetreAPropos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREAPROPOS_H
