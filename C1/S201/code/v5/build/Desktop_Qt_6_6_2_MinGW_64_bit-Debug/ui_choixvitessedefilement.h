/********************************************************************************
** Form generated from reading UI file 'choixvitessedefilement.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIXVITESSEDEFILEMENT_H
#define UI_CHOIXVITESSEDEFILEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_choixVitesseDefilement
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *titre;
    QLabel *desc1;
    QLabel *desc2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *titreSaisie;
    QLineEdit *choixUtilisateur;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *choixVitesseDefilement)
    {
        if (choixVitesseDefilement->objectName().isEmpty())
            choixVitesseDefilement->setObjectName("choixVitesseDefilement");
        choixVitesseDefilement->resize(1257, 684);
        verticalLayout_2 = new QVBoxLayout(choixVitesseDefilement);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        titre = new QLabel(choixVitesseDefilement);
        titre->setObjectName("titre");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(18);
        font.setBold(true);
        titre->setFont(font);
        titre->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titre);

        desc1 = new QLabel(choixVitesseDefilement);
        desc1->setObjectName("desc1");
        desc1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(desc1);

        desc2 = new QLabel(choixVitesseDefilement);
        desc2->setObjectName("desc2");
        desc2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(desc2);

        label = new QLabel(choixVitesseDefilement);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        titreSaisie = new QLabel(choixVitesseDefilement);
        titreSaisie->setObjectName("titreSaisie");
        QFont font1;
        font1.setBold(true);
        titreSaisie->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, titreSaisie);

        choixUtilisateur = new QLineEdit(choixVitesseDefilement);
        choixUtilisateur->setObjectName("choixUtilisateur");

        formLayout->setWidget(0, QFormLayout::FieldRole, choixUtilisateur);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(choixVitesseDefilement);
        buttonBox->setObjectName("buttonBox");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        buttonBox->setFont(font2);
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(choixVitesseDefilement);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, choixVitesseDefilement, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, choixVitesseDefilement, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(choixVitesseDefilement);
    } // setupUi

    void retranslateUi(QDialog *choixVitesseDefilement)
    {
        choixVitesseDefilement->setWindowTitle(QCoreApplication::translate("choixVitesseDefilement", "Dialog", nullptr));
        titre->setText(QCoreApplication::translate("choixVitesseDefilement", "Choix de la vitesse de d\303\251filement", nullptr));
        desc1->setText(QCoreApplication::translate("choixVitesseDefilement", "Veuillez entrer une valeur comprise entre 1 et 5 secondes (inclus).", nullptr));
        desc2->setText(QCoreApplication::translate("choixVitesseDefilement", " Ce sera la dur\303\251e d'une diapositive en secondes en mode Automatique", nullptr));
        label->setText(QCoreApplication::translate("choixVitesseDefilement", "Une dur\303\251e doit \303\252tre un nombre entier de secondes.", nullptr));
        titreSaisie->setText(QCoreApplication::translate("choixVitesseDefilement", "Votre vitesse de d\303\251filement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choixVitesseDefilement: public Ui_choixVitesseDefilement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIXVITESSEDEFILEMENT_H
