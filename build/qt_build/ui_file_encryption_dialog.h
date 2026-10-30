/********************************************************************************
** Form generated from reading UI file 'file_encryption_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_ENCRYPTION_DIALOG_H
#define UI_FILE_ENCRYPTION_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FileEncryptionDialog
{
public:
    QAction *actionSwitchDirection;
    QAction *actionIOChange;
    QGridLayout *gridLayout;
    QDialogButtonBox *uiButtonBox;
    QGridLayout *gridLayout_2;
    QGroupBox *uiCommandGroupBox;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *uiStart;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *uiProgressBar;
    QPushButton *uiCancel;
    QGroupBox *uiFileGroupBox;
    QGridLayout *gridLayout_6;
    QLabel *label_7;
    QPushButton *uiInputBrowse;
    QPushButton *uiOutputBrowse;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *uiOutputFile;
    QLineEdit *uiInputFile;
    QHBoxLayout *horizontalLayout;
    QRadioButton *uiEpdRadio;
    QRadioButton *uiGpgRadio;
    QRadioButton *uiAscRadio;
    QGroupBox *uiKeyPathGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *uiKeyFilePath;
    QPushButton *uiSelectKeyFile;
    QGroupBox *uiPassphraseGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *uiPassphrase;
    QLineEdit *uiConfirmPassphrase;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *uiParametersGroupBox;
    QGridLayout *gridLayout_5;
    QPushButton *uiParameters;
    QLabel *label_6;
    QRadioButton *uiEncryptRadio;
    QRadioButton *uiDecryptRadio;

    void setupUi(QDialog *FileEncryptionDialog)
    {
        if (FileEncryptionDialog->objectName().isEmpty())
            FileEncryptionDialog->setObjectName("FileEncryptionDialog");
        FileEncryptionDialog->resize(758, 526);
        actionSwitchDirection = new QAction(FileEncryptionDialog);
        actionSwitchDirection->setObjectName("actionSwitchDirection");
        actionIOChange = new QAction(FileEncryptionDialog);
        actionIOChange->setObjectName("actionIOChange");
        gridLayout = new QGridLayout(FileEncryptionDialog);
        gridLayout->setObjectName("gridLayout");
        uiButtonBox = new QDialogButtonBox(FileEncryptionDialog);
        uiButtonBox->setObjectName("uiButtonBox");
        uiButtonBox->setOrientation(Qt::Horizontal);
        uiButtonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(uiButtonBox, 5, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        uiCommandGroupBox = new QGroupBox(FileEncryptionDialog);
        uiCommandGroupBox->setObjectName("uiCommandGroupBox");
        gridLayout_7 = new QGridLayout(uiCommandGroupBox);
        gridLayout_7->setObjectName("gridLayout_7");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 1, 0, 1, 1);

        uiStart = new QPushButton(uiCommandGroupBox);
        uiStart->setObjectName("uiStart");
        uiStart->setEnabled(false);
        uiStart->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(uiStart, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        uiProgressBar = new QProgressBar(uiCommandGroupBox);
        uiProgressBar->setObjectName("uiProgressBar");
        uiProgressBar->setValue(0);
        uiProgressBar->setTextVisible(true);
        uiProgressBar->setFormat(QString::fromUtf8("%p%"));

        gridLayout_7->addWidget(uiProgressBar, 0, 0, 1, 4);

        uiCancel = new QPushButton(uiCommandGroupBox);
        uiCancel->setObjectName("uiCancel");
        uiCancel->setEnabled(false);
        uiCancel->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(uiCancel, 1, 2, 1, 1);


        gridLayout_2->addWidget(uiCommandGroupBox, 5, 0, 1, 1);

        uiFileGroupBox = new QGroupBox(FileEncryptionDialog);
        uiFileGroupBox->setObjectName("uiFileGroupBox");
        gridLayout_6 = new QGridLayout(uiFileGroupBox);
        gridLayout_6->setObjectName("gridLayout_6");
        label_7 = new QLabel(uiFileGroupBox);
        label_7->setObjectName("label_7");

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        uiInputBrowse = new QPushButton(uiFileGroupBox);
        uiInputBrowse->setObjectName("uiInputBrowse");

        gridLayout_6->addWidget(uiInputBrowse, 1, 2, 1, 1);

        uiOutputBrowse = new QPushButton(uiFileGroupBox);
        uiOutputBrowse->setObjectName("uiOutputBrowse");

        gridLayout_6->addWidget(uiOutputBrowse, 2, 2, 1, 1);

        label_2 = new QLabel(uiFileGroupBox);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(uiFileGroupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(label, 1, 0, 1, 1);

        uiOutputFile = new QLineEdit(uiFileGroupBox);
        uiOutputFile->setObjectName("uiOutputFile");

        gridLayout_6->addWidget(uiOutputFile, 2, 1, 1, 1);

        uiInputFile = new QLineEdit(uiFileGroupBox);
        uiInputFile->setObjectName("uiInputFile");

        gridLayout_6->addWidget(uiInputFile, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        uiEpdRadio = new QRadioButton(uiFileGroupBox);
        uiEpdRadio->setObjectName("uiEpdRadio");
        uiEpdRadio->setChecked(true);

        horizontalLayout->addWidget(uiEpdRadio);

        uiGpgRadio = new QRadioButton(uiFileGroupBox);
        uiGpgRadio->setObjectName("uiGpgRadio");
        uiGpgRadio->setChecked(false);

        horizontalLayout->addWidget(uiGpgRadio);

        uiAscRadio = new QRadioButton(uiFileGroupBox);
        uiAscRadio->setObjectName("uiAscRadio");

        horizontalLayout->addWidget(uiAscRadio);


        gridLayout_6->addLayout(horizontalLayout, 0, 1, 1, 1);


        gridLayout_2->addWidget(uiFileGroupBox, 1, 0, 1, 1);

        uiKeyPathGroupBox = new QGroupBox(FileEncryptionDialog);
        uiKeyPathGroupBox->setObjectName("uiKeyPathGroupBox");
        gridLayout_3 = new QGridLayout(uiKeyPathGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        label_5 = new QLabel(uiKeyPathGroupBox);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        uiKeyFilePath = new QLineEdit(uiKeyPathGroupBox);
        uiKeyFilePath->setObjectName("uiKeyFilePath");

        gridLayout_3->addWidget(uiKeyFilePath, 0, 1, 1, 1);

        uiSelectKeyFile = new QPushButton(uiKeyPathGroupBox);
        uiSelectKeyFile->setObjectName("uiSelectKeyFile");

        gridLayout_3->addWidget(uiSelectKeyFile, 0, 2, 1, 1);


        gridLayout_2->addWidget(uiKeyPathGroupBox, 4, 0, 1, 1);

        uiPassphraseGroupBox = new QGroupBox(FileEncryptionDialog);
        uiPassphraseGroupBox->setObjectName("uiPassphraseGroupBox");
        gridLayout_4 = new QGridLayout(uiPassphraseGroupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        label_3 = new QLabel(uiPassphraseGroupBox);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(uiPassphraseGroupBox);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        uiPassphrase = new QLineEdit(uiPassphraseGroupBox);
        uiPassphrase->setObjectName("uiPassphrase");
        uiPassphrase->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(uiPassphrase, 0, 1, 1, 1);

        uiConfirmPassphrase = new QLineEdit(uiPassphraseGroupBox);
        uiConfirmPassphrase->setObjectName("uiConfirmPassphrase");
        uiConfirmPassphrase->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(uiConfirmPassphrase, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_2->addWidget(uiPassphraseGroupBox, 3, 0, 1, 1);

        uiParametersGroupBox = new QGroupBox(FileEncryptionDialog);
        uiParametersGroupBox->setObjectName("uiParametersGroupBox");
        uiParametersGroupBox->setLayoutDirection(Qt::LeftToRight);
        uiParametersGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_5 = new QGridLayout(uiParametersGroupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        uiParameters = new QPushButton(uiParametersGroupBox);
        uiParameters->setObjectName("uiParameters");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(uiParameters->sizePolicy().hasHeightForWidth());
        uiParameters->setSizePolicy(sizePolicy1);
        uiParameters->setMinimumSize(QSize(100, 0));

        gridLayout_5->addWidget(uiParameters, 0, 3, 1, 1);

        label_6 = new QLabel(uiParametersGroupBox);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(100, 0));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        uiEncryptRadio = new QRadioButton(uiParametersGroupBox);
        uiEncryptRadio->setObjectName("uiEncryptRadio");
        uiEncryptRadio->setChecked(true);

        gridLayout_5->addWidget(uiEncryptRadio, 0, 1, 1, 1);

        uiDecryptRadio = new QRadioButton(uiParametersGroupBox);
        uiDecryptRadio->setObjectName("uiDecryptRadio");

        gridLayout_5->addWidget(uiDecryptRadio, 0, 2, 1, 1);


        gridLayout_2->addWidget(uiParametersGroupBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(uiGpgRadio);
        label_2->setBuddy(uiOutputFile);
        label->setBuddy(uiInputFile);
        label_5->setBuddy(uiKeyFilePath);
        label_3->setBuddy(uiPassphrase);
        label_4->setBuddy(uiConfirmPassphrase);
        label_6->setBuddy(uiEncryptRadio);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(uiEncryptRadio, uiDecryptRadio);
        QWidget::setTabOrder(uiDecryptRadio, uiParameters);
        QWidget::setTabOrder(uiParameters, uiEpdRadio);
        QWidget::setTabOrder(uiEpdRadio, uiGpgRadio);
        QWidget::setTabOrder(uiGpgRadio, uiInputFile);
        QWidget::setTabOrder(uiInputFile, uiInputBrowse);
        QWidget::setTabOrder(uiInputBrowse, uiOutputFile);
        QWidget::setTabOrder(uiOutputFile, uiOutputBrowse);
        QWidget::setTabOrder(uiOutputBrowse, uiPassphrase);
        QWidget::setTabOrder(uiPassphrase, uiConfirmPassphrase);
        QWidget::setTabOrder(uiConfirmPassphrase, uiKeyFilePath);
        QWidget::setTabOrder(uiKeyFilePath, uiSelectKeyFile);
        QWidget::setTabOrder(uiSelectKeyFile, uiStart);

        retranslateUi(FileEncryptionDialog);
        QObject::connect(uiButtonBox, &QDialogButtonBox::accepted, FileEncryptionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(uiButtonBox, &QDialogButtonBox::rejected, FileEncryptionDialog, qOverload<>(&QDialog::reject));
        QObject::connect(uiEncryptRadio, &QRadioButton::toggled, uiParameters, &QPushButton::setEnabled);
        QObject::connect(uiEncryptRadio, &QRadioButton::toggled, uiConfirmPassphrase, &QLineEdit::setEnabled);
        QObject::connect(uiEncryptRadio, &QRadioButton::toggled, uiPassphrase, &QLineEdit::setEnabled);
        QObject::connect(uiEncryptRadio, &QRadioButton::toggled, actionSwitchDirection, qOverload<>(&QAction::trigger));
        QObject::connect(uiInputFile, &QLineEdit::textChanged, actionIOChange, qOverload<>(&QAction::trigger));
        QObject::connect(uiOutputFile, &QLineEdit::textChanged, actionIOChange, qOverload<>(&QAction::trigger));
        QObject::connect(uiEncryptRadio, &QRadioButton::toggled, uiEpdRadio, &QRadioButton::setEnabled);
        QObject::connect(uiEncryptRadio, &QRadioButton::toggled, uiGpgRadio, &QRadioButton::setEnabled);
        QObject::connect(FileEncryptionDialog, SIGNAL(ToggleWorkInProgress(bool)), uiFileGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(FileEncryptionDialog, SIGNAL(ToggleWorkInProgress(bool)), uiPassphraseGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(FileEncryptionDialog, SIGNAL(ToggleWorkInProgress(bool)), uiKeyPathGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(FileEncryptionDialog, SIGNAL(ToggleWorkInProgress(bool)), uiParametersGroupBox, SLOT(setDisabled(bool)));
        QObject::connect(FileEncryptionDialog, SIGNAL(ToggleWorkInProgress(bool)), uiStart, SLOT(setDisabled(bool)));
        QObject::connect(FileEncryptionDialog, SIGNAL(ToggleWorkInProgress(bool)), uiCancel, SLOT(setEnabled(bool)));
        QObject::connect(FileEncryptionDialog, SIGNAL(ToggleWorkInProgress(bool)), uiButtonBox, SLOT(setDisabled(bool)));
        QObject::connect(FileEncryptionDialog, SIGNAL(ToggleWorkInProgress(bool)), FileEncryptionDialog, SLOT(on_toggleWorkInProgress(bool)));
        QObject::connect(uiCancel, SIGNAL(clicked()), FileEncryptionDialog, SLOT(on_uiCancel_clicked()));
        QObject::connect(uiEncryptRadio, &QRadioButton::toggled, uiAscRadio, &QRadioButton::setEnabled);
        QObject::connect(uiEpdRadio, SIGNAL(toggled(bool)), FileEncryptionDialog, SLOT(on_toggleExtension(bool)));
        QObject::connect(uiGpgRadio, SIGNAL(toggled(bool)), FileEncryptionDialog, SLOT(on_toggleExtension(bool)));
        QObject::connect(uiAscRadio, SIGNAL(toggled(bool)), FileEncryptionDialog, SLOT(on_toggleExtension(bool)));

        QMetaObject::connectSlotsByName(FileEncryptionDialog);
    } // setupUi

    void retranslateUi(QDialog *FileEncryptionDialog)
    {
        FileEncryptionDialog->setWindowTitle(QCoreApplication::translate("FileEncryptionDialog", "File Encryption", nullptr));
        actionSwitchDirection->setText(QCoreApplication::translate("FileEncryptionDialog", "SwitchDirection", nullptr));
        actionIOChange->setText(QCoreApplication::translate("FileEncryptionDialog", "IOChange", nullptr));
        uiCommandGroupBox->setTitle(QCoreApplication::translate("FileEncryptionDialog", "Command", nullptr));
        uiStart->setText(QCoreApplication::translate("FileEncryptionDialog", "Start", nullptr));
        uiCancel->setText(QCoreApplication::translate("FileEncryptionDialog", "Cancel", nullptr));
        uiFileGroupBox->setTitle(QCoreApplication::translate("FileEncryptionDialog", "Files", nullptr));
        label_7->setText(QCoreApplication::translate("FileEncryptionDialog", "Format:", nullptr));
        uiInputBrowse->setText(QCoreApplication::translate("FileEncryptionDialog", "Browse\342\200\246", nullptr));
        uiOutputBrowse->setText(QCoreApplication::translate("FileEncryptionDialog", "Browse\342\200\246", nullptr));
        label_2->setText(QCoreApplication::translate("FileEncryptionDialog", "Output file:", nullptr));
        label->setText(QCoreApplication::translate("FileEncryptionDialog", "Input file:", nullptr));
#if QT_CONFIG(tooltip)
        uiEpdRadio->setToolTip(QCoreApplication::translate("FileEncryptionDialog", "EncryptPad format", nullptr));
#endif // QT_CONFIG(tooltip)
        uiEpdRadio->setText(QCoreApplication::translate("FileEncryptionDialog", "EPD", nullptr));
#if QT_CONFIG(tooltip)
        uiGpgRadio->setToolTip(QCoreApplication::translate("FileEncryptionDialog", "OpenPGP", nullptr));
#endif // QT_CONFIG(tooltip)
        uiGpgRadio->setText(QCoreApplication::translate("FileEncryptionDialog", "GPG", nullptr));
#if QT_CONFIG(tooltip)
        uiAscRadio->setToolTip(QCoreApplication::translate("FileEncryptionDialog", "OpenPGP Armor", nullptr));
#endif // QT_CONFIG(tooltip)
        uiAscRadio->setText(QCoreApplication::translate("FileEncryptionDialog", "ASC", nullptr));
        uiKeyPathGroupBox->setTitle(QCoreApplication::translate("FileEncryptionDialog", "Key path", nullptr));
        label_5->setText(QCoreApplication::translate("FileEncryptionDialog", "Key file path:", nullptr));
        uiSelectKeyFile->setText(QCoreApplication::translate("FileEncryptionDialog", "Select\342\200\246", nullptr));
        uiPassphraseGroupBox->setTitle(QCoreApplication::translate("FileEncryptionDialog", "Passphrase", nullptr));
        label_3->setText(QCoreApplication::translate("FileEncryptionDialog", "Passphrase:", nullptr));
        label_4->setText(QCoreApplication::translate("FileEncryptionDialog", "Confirmation:", nullptr));
        uiParametersGroupBox->setTitle(QCoreApplication::translate("FileEncryptionDialog", "Parameters", nullptr));
        uiParameters->setText(QCoreApplication::translate("FileEncryptionDialog", "Parameters\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("FileEncryptionDialog", "Encryption:", nullptr));
        uiEncryptRadio->setText(QCoreApplication::translate("FileEncryptionDialog", "Encrypt", nullptr));
        uiDecryptRadio->setText(QCoreApplication::translate("FileEncryptionDialog", "Decrypt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileEncryptionDialog: public Ui_FileEncryptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_ENCRYPTION_DIALOG_H
