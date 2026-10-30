/********************************************************************************
** Form generated from reading UI file 'get_passphrase_or_key_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_PASSPHRASE_OR_KEY_DIALOG_H
#define UI_GET_PASSPHRASE_OR_KEY_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_GetPassphraseOrKeyDialog
{
public:
    QAction *actionSelectKeyFile;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QRadioButton *uiPassphraseRadio;
    QRadioButton *uiKeyRadio;
    QLineEdit *uiKeyFile;
    QLineEdit *uiPassphrase;
    QPushButton *uiSelectKeyFile;
    QDialogButtonBox *uiButtonBox;

    void setupUi(QDialog *GetPassphraseOrKeyDialog)
    {
        if (GetPassphraseOrKeyDialog->objectName().isEmpty())
            GetPassphraseOrKeyDialog->setObjectName("GetPassphraseOrKeyDialog");
        GetPassphraseOrKeyDialog->resize(494, 175);
        actionSelectKeyFile = new QAction(GetPassphraseOrKeyDialog);
        actionSelectKeyFile->setObjectName("actionSelectKeyFile");
        gridLayout = new QGridLayout(GetPassphraseOrKeyDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        uiPassphraseRadio = new QRadioButton(GetPassphraseOrKeyDialog);
        uiPassphraseRadio->setObjectName("uiPassphraseRadio");
        uiPassphraseRadio->setChecked(true);

        gridLayout_2->addWidget(uiPassphraseRadio, 0, 0, 1, 1);

        uiKeyRadio = new QRadioButton(GetPassphraseOrKeyDialog);
        uiKeyRadio->setObjectName("uiKeyRadio");

        gridLayout_2->addWidget(uiKeyRadio, 1, 0, 1, 1);

        uiKeyFile = new QLineEdit(GetPassphraseOrKeyDialog);
        uiKeyFile->setObjectName("uiKeyFile");
        uiKeyFile->setEnabled(false);

        gridLayout_2->addWidget(uiKeyFile, 1, 1, 1, 1);

        uiPassphrase = new QLineEdit(GetPassphraseOrKeyDialog);
        uiPassphrase->setObjectName("uiPassphrase");
        uiPassphrase->setMinimumSize(QSize(0, 21));
        uiPassphrase->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(uiPassphrase, 0, 1, 1, 1);

        uiSelectKeyFile = new QPushButton(GetPassphraseOrKeyDialog);
        uiSelectKeyFile->setObjectName("uiSelectKeyFile");
        uiSelectKeyFile->setEnabled(false);

        gridLayout_2->addWidget(uiSelectKeyFile, 1, 2, 1, 1);

        uiButtonBox = new QDialogButtonBox(GetPassphraseOrKeyDialog);
        uiButtonBox->setObjectName("uiButtonBox");
        uiButtonBox->setMinimumSize(QSize(0, 35));
        uiButtonBox->setOrientation(Qt::Horizontal);
        uiButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(uiButtonBox, 2, 0, 1, 3);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        QWidget::setTabOrder(uiPassphraseRadio, uiPassphrase);
        QWidget::setTabOrder(uiPassphrase, uiKeyRadio);
        QWidget::setTabOrder(uiKeyRadio, uiKeyFile);
        QWidget::setTabOrder(uiKeyFile, uiSelectKeyFile);

        retranslateUi(GetPassphraseOrKeyDialog);
        QObject::connect(uiButtonBox, &QDialogButtonBox::accepted, GetPassphraseOrKeyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(uiButtonBox, &QDialogButtonBox::rejected, GetPassphraseOrKeyDialog, qOverload<>(&QDialog::reject));
        QObject::connect(uiPassphraseRadio, &QRadioButton::toggled, uiPassphrase, &QLineEdit::setEnabled);
        QObject::connect(uiKeyRadio, &QRadioButton::toggled, uiKeyFile, &QLineEdit::setEnabled);
        QObject::connect(uiKeyRadio, &QRadioButton::toggled, uiSelectKeyFile, &QPushButton::setEnabled);
        QObject::connect(uiSelectKeyFile, &QPushButton::clicked, actionSelectKeyFile, qOverload<>(&QAction::trigger));

        QMetaObject::connectSlotsByName(GetPassphraseOrKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *GetPassphraseOrKeyDialog)
    {
        GetPassphraseOrKeyDialog->setWindowTitle(QCoreApplication::translate("GetPassphraseOrKeyDialog", "Passphrase or Key File", nullptr));
        actionSelectKeyFile->setText(QCoreApplication::translate("GetPassphraseOrKeyDialog", "Select\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectKeyFile->setToolTip(QCoreApplication::translate("GetPassphraseOrKeyDialog", "Select key file", nullptr));
#endif // QT_CONFIG(tooltip)
        uiPassphraseRadio->setText(QCoreApplication::translate("GetPassphraseOrKeyDialog", "Passphrase:", nullptr));
        uiKeyRadio->setText(QCoreApplication::translate("GetPassphraseOrKeyDialog", "Key File:", nullptr));
#if QT_CONFIG(tooltip)
        uiPassphrase->setToolTip(QCoreApplication::translate("GetPassphraseOrKeyDialog", "Leave blank when passphrase is not needed", nullptr));
#endif // QT_CONFIG(tooltip)
        uiSelectKeyFile->setText(QCoreApplication::translate("GetPassphraseOrKeyDialog", "Select\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetPassphraseOrKeyDialog: public Ui_GetPassphraseOrKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_PASSPHRASE_OR_KEY_DIALOG_H
