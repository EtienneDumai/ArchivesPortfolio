/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *actionCharger_Diaporama;
    QAction *actionQuitter;
    QAction *actionA_propos_de;
    QAction *actionX0_5;
    QAction *actionX0_75;
    QAction *actionX1;
    QAction *actionX1_25;
    QAction *actionX1_5;
    QAction *actionX1_75;
    QAction *actionX2;
    QAction *actionModeAuto;
    QAction *actionModeManuel;
    QAction *actionChangerVitesseDefilement;
    QAction *actionEnleverDiaporama;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLancerDiapo;
    QSpacerItem *horizontalSpacer;
    QLabel *titreDiapo;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnArreterDiapo;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *titreImage;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *image;
    QSpacerItem *horizontalSpacer_4;
    QLabel *catImage;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPrec;
    QSpacerItem *horizontalSpacerEntrePrecEtSuiv;
    QPushButton *btnSuiv;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuMode;
    QMenu *menuAide;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName("LecteurVue");
        LecteurVue->resize(507, 335);
        actionCharger_Diaporama = new QAction(LecteurVue);
        actionCharger_Diaporama->setObjectName("actionCharger_Diaporama");
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName("actionQuitter");
        actionA_propos_de = new QAction(LecteurVue);
        actionA_propos_de->setObjectName("actionA_propos_de");
        actionX0_5 = new QAction(LecteurVue);
        actionX0_5->setObjectName("actionX0_5");
        actionX0_75 = new QAction(LecteurVue);
        actionX0_75->setObjectName("actionX0_75");
        actionX1 = new QAction(LecteurVue);
        actionX1->setObjectName("actionX1");
        actionX1_25 = new QAction(LecteurVue);
        actionX1_25->setObjectName("actionX1_25");
        actionX1_5 = new QAction(LecteurVue);
        actionX1_5->setObjectName("actionX1_5");
        actionX1_75 = new QAction(LecteurVue);
        actionX1_75->setObjectName("actionX1_75");
        actionX2 = new QAction(LecteurVue);
        actionX2->setObjectName("actionX2");
        actionModeAuto = new QAction(LecteurVue);
        actionModeAuto->setObjectName("actionModeAuto");
        actionModeManuel = new QAction(LecteurVue);
        actionModeManuel->setObjectName("actionModeManuel");
        actionChangerVitesseDefilement = new QAction(LecteurVue);
        actionChangerVitesseDefilement->setObjectName("actionChangerVitesseDefilement");
        actionEnleverDiaporama = new QAction(LecteurVue);
        actionEnleverDiaporama->setObjectName("actionEnleverDiaporama");
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        btnLancerDiapo = new QPushButton(centralwidget);
        btnLancerDiapo->setObjectName("btnLancerDiapo");

        horizontalLayout->addWidget(btnLancerDiapo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        titreDiapo = new QLabel(centralwidget);
        titreDiapo->setObjectName("titreDiapo");
        titreDiapo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(titreDiapo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnArreterDiapo = new QPushButton(centralwidget);
        btnArreterDiapo->setObjectName("btnArreterDiapo");

        horizontalLayout->addWidget(btnArreterDiapo);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        titreImage = new QLabel(centralwidget);
        titreImage->setObjectName("titreImage");
        titreImage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titreImage);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        image = new QLabel(centralwidget);
        image->setObjectName("image");

        horizontalLayout_5->addWidget(image);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        catImage = new QLabel(centralwidget);
        catImage->setObjectName("catImage");
        catImage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(catImage);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnPrec = new QPushButton(centralwidget);
        btnPrec->setObjectName("btnPrec");

        horizontalLayout_2->addWidget(btnPrec);

        horizontalSpacerEntrePrecEtSuiv = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacerEntrePrecEtSuiv);

        btnSuiv = new QPushButton(centralwidget);
        btnSuiv->setObjectName("btnSuiv");

        horizontalLayout_2->addWidget(btnSuiv);


        verticalLayout_2->addLayout(horizontalLayout_2);

        LecteurVue->setCentralWidget(centralwidget);
        toolBar = new QToolBar(LecteurVue);
        toolBar->setObjectName("toolBar");
        LecteurVue->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(LecteurVue);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 507, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName("menuFichier");
        menuParam_tres = new QMenu(menuFichier);
        menuParam_tres->setObjectName("menuParam_tres");
        menuMode = new QMenu(menuParam_tres);
        menuMode->setObjectName("menuMode");
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName("menuAide");
        LecteurVue->setMenuBar(menuBar);
        statusBar = new QStatusBar(LecteurVue);
        statusBar->setObjectName("statusBar");
        LecteurVue->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(menuParam_tres->menuAction());
        menuFichier->addAction(actionQuitter);
        menuParam_tres->addAction(actionCharger_Diaporama);
        menuParam_tres->addAction(menuMode->menuAction());
        menuParam_tres->addAction(actionChangerVitesseDefilement);
        menuParam_tres->addAction(actionEnleverDiaporama);
        menuMode->addAction(actionModeAuto);
        menuMode->addAction(actionModeManuel);
        menuAide->addAction(actionA_propos_de);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "lecteurvue", nullptr));
        actionCharger_Diaporama->setText(QCoreApplication::translate("LecteurVue", "Charger Diaporama", nullptr));
        actionQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("LecteurVue", "A propos de", nullptr));
        actionX0_5->setText(QCoreApplication::translate("LecteurVue", "x0.5", nullptr));
        actionX0_75->setText(QCoreApplication::translate("LecteurVue", "x0.75", nullptr));
        actionX1->setText(QCoreApplication::translate("LecteurVue", "X1", nullptr));
        actionX1_25->setText(QCoreApplication::translate("LecteurVue", "X1.25", nullptr));
        actionX1_5->setText(QCoreApplication::translate("LecteurVue", "X1.5", nullptr));
        actionX1_75->setText(QCoreApplication::translate("LecteurVue", "X1.75", nullptr));
        actionX2->setText(QCoreApplication::translate("LecteurVue", "X2", nullptr));
        actionModeAuto->setText(QCoreApplication::translate("LecteurVue", "Automatique", nullptr));
        actionModeManuel->setText(QCoreApplication::translate("LecteurVue", "Manuel", nullptr));
        actionChangerVitesseDefilement->setText(QCoreApplication::translate("LecteurVue", "Changer la vitesse de d\303\251filement du diaporama", nullptr));
        actionEnleverDiaporama->setText(QCoreApplication::translate("LecteurVue", "Enlever le diaporama en cours", nullptr));
        btnLancerDiapo->setText(QCoreApplication::translate("LecteurVue", "Lancer Diaporama", nullptr));
        titreDiapo->setText(QCoreApplication::translate("LecteurVue", "Titre du diaporama", nullptr));
        btnArreterDiapo->setText(QCoreApplication::translate("LecteurVue", "Arr\303\252ter le diaporama", nullptr));
        titreImage->setText(QCoreApplication::translate("LecteurVue", "Titre de l'image", nullptr));
        image->setText(QString());
        catImage->setText(QCoreApplication::translate("LecteurVue", "Cat\303\251gorie", nullptr));
        btnPrec->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        btnSuiv->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("LecteurVue", "toolBar", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tres", nullptr));
        menuMode->setTitle(QCoreApplication::translate("LecteurVue", "Mode", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
