/********************************************************************************
** Form generated from reading UI file 'confirm_passphrase_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_PASSPHRASE_DIALOG_H
#define UI_CONFIRM_PASSPHRASE_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ConfirmPassphraseDialog
{
public:
    QAction *actionOk;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *uiPassphrase;
    QLabel *label;
    QDialogButtonBox *uiButtonBox;
    QLabel *label_2;
    QLineEdit *uiConfirm;

    void setupUi(QDialog *ConfirmPassphraseDialog)
    {
        if (ConfirmPassphraseDialog->objectName().isEmpty())
            ConfirmPassphraseDialog->setObjectName("ConfirmPassphraseDialog");
        ConfirmPassphraseDialog->resize(348, 155);
        ConfirmPassphraseDialog->setMinimumSize(QSize(316, 155));
        ConfirmPassphraseDialog->setMaximumSize(QSize(412, 209));
        actionOk = new QAction(ConfirmPassphraseDialog);
        actionOk->setObjectName("actionOk");
        gridLayout = new QGridLayout(ConfirmPassphraseDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        uiPassphrase = new QLineEdit(ConfirmPassphraseDialog);
        uiPassphrase->setObjectName("uiPassphrase");
        uiPassphrase->setMinimumSize(QSize(0, 21));
        uiPassphrase->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(uiPassphrase, 0, 1, 1, 1);

        label = new QLabel(ConfirmPassphraseDialog);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        uiButtonBox = new QDialogButtonBox(ConfirmPassphraseDialog);
        uiButtonBox->setObjectName("uiButtonBox");
        uiButtonBox->setMinimumSize(QSize(0, 35));
        uiButtonBox->setOrientation(Qt::Horizontal);
        uiButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(uiButtonBox, 2, 0, 1, 2);

        label_2 = new QLabel(ConfirmPassphraseDialog);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        uiConfirm = new QLineEdit(ConfirmPassphraseDialog);
        uiConfirm->setObjectName("uiConfirm");
        uiConfirm->setMinimumSize(QSize(0, 21));
        uiConfirm->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(uiConfirm, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(uiPassphrase);
        label_2->setBuddy(uiConfirm);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(uiPassphrase, uiConfirm);

        retranslateUi(ConfirmPassphraseDialog);
        QObject::connect(actionOk, SIGNAL(triggered()), ConfirmPassphraseDialog, SLOT(invokeOk()));
        QObject::connect(uiButtonBox, &QDialogButtonBox::accepted, actionOk, qOverload<>(&QAction::trigger));
        QObject::connect(uiButtonBox, &QDialogButtonBox::rejected, ConfirmPassphraseDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConfirmPassphraseDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfirmPassphraseDialog)
    {
        ConfirmPassphraseDialog->setWindowTitle(QCoreApplication::translate("ConfirmPassphraseDialog", "Set Passphrase", nullptr));
        actionOk->setText(QCoreApplication::translate("ConfirmPassphraseDialog", "OK", nullptr));
#if QT_CONFIG(shortcut)
        actionOk->setShortcut(QCoreApplication::translate("ConfirmPassphraseDialog", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        uiPassphrase->setToolTip(QCoreApplication::translate("ConfirmPassphraseDialog", "Leave blank when passphrase is not needed", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("ConfirmPassphraseDialog", "&Passphrase:", nullptr));
        label_2->setText(QCoreApplication::translate("ConfirmPassphraseDialog", "&Confirmation:", nullptr));
#if QT_CONFIG(tooltip)
        uiConfirm->setToolTip(QCoreApplication::translate("ConfirmPassphraseDialog", "Leave blank when passphrase is not needed", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class ConfirmPassphraseDialog: public Ui_ConfirmPassphraseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_PASSPHRASE_DIALOG_H
