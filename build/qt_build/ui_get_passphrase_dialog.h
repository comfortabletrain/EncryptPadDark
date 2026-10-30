/********************************************************************************
** Form generated from reading UI file 'get_passphrase_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_PASSPHRASE_DIALOG_H
#define UI_GET_PASSPHRASE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_GetPassphraseDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *uiPassphrase;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GetPassphraseDialog)
    {
        if (GetPassphraseDialog->objectName().isEmpty())
            GetPassphraseDialog->setObjectName("GetPassphraseDialog");
        GetPassphraseDialog->resize(406, 130);
        GetPassphraseDialog->setMinimumSize(QSize(316, 110));
        GetPassphraseDialog->setMaximumSize(QSize(460, 151));
        gridLayout = new QGridLayout(GetPassphraseDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(GetPassphraseDialog);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        uiPassphrase = new QLineEdit(GetPassphraseDialog);
        uiPassphrase->setObjectName("uiPassphrase");
        uiPassphrase->setMinimumSize(QSize(0, 21));
        uiPassphrase->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(uiPassphrase, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(GetPassphraseDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setMinimumSize(QSize(0, 35));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(uiPassphrase);
#endif // QT_CONFIG(shortcut)

        retranslateUi(GetPassphraseDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GetPassphraseDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GetPassphraseDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GetPassphraseDialog);
    } // setupUi

    void retranslateUi(QDialog *GetPassphraseDialog)
    {
        GetPassphraseDialog->setWindowTitle(QCoreApplication::translate("GetPassphraseDialog", "Passphrase", nullptr));
        label->setText(QCoreApplication::translate("GetPassphraseDialog", "&Passphrase:", nullptr));
#if QT_CONFIG(tooltip)
        uiPassphrase->setToolTip(QCoreApplication::translate("GetPassphraseDialog", "Leave blank when passphrase is not needed", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class GetPassphraseDialog: public Ui_GetPassphraseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_PASSPHRASE_DIALOG_H
