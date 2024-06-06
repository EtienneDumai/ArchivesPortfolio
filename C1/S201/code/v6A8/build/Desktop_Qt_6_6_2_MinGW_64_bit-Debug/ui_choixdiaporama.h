/********************************************************************************
** Form generated from reading UI file 'choixdiaporama.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIXDIAPORAMA_H
#define UI_CHOIXDIAPORAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChoixDiaporama
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxDiaporamas;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChoixDiaporama)
    {
        if (ChoixDiaporama->objectName().isEmpty())
            ChoixDiaporama->setObjectName("ChoixDiaporama");
        ChoixDiaporama->resize(524, 349);
        verticalLayout = new QVBoxLayout(ChoixDiaporama);
        verticalLayout->setObjectName("verticalLayout");
        comboBoxDiaporamas = new QComboBox(ChoixDiaporama);
        comboBoxDiaporamas->setObjectName("comboBoxDiaporamas");

        verticalLayout->addWidget(comboBoxDiaporamas);

        buttonBox = new QDialogButtonBox(ChoixDiaporama);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChoixDiaporama);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChoixDiaporama, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChoixDiaporama, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChoixDiaporama);
    } // setupUi

    void retranslateUi(QDialog *ChoixDiaporama)
    {
        ChoixDiaporama->setWindowTitle(QCoreApplication::translate("ChoixDiaporama", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoixDiaporama: public Ui_ChoixDiaporama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIXDIAPORAMA_H
