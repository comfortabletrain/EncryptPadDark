/********************************************************************************
** Form generated from reading UI file 'file_properties_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_PROPERTIES_DIALOG_H
#define UI_FILE_PROPERTIES_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FilePropertiesDialog
{
public:
    QAction *actionPropertyChanged;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QComboBox *uiIterations;
    QLabel *label_3;
    QLabel *uiSalt;
    QLabel *label;
    QComboBox *uiCompressionAlgo;
    QDialogButtonBox *buttonBox;
    QComboBox *uiHashAlgo;
    QComboBox *uiCipherAlgo;
    QLineEdit *uiPath;

    void setupUi(QDialog *FilePropertiesDialog)
    {
        if (FilePropertiesDialog->objectName().isEmpty())
            FilePropertiesDialog->setObjectName("FilePropertiesDialog");
        FilePropertiesDialog->setWindowModality(Qt::ApplicationModal);
        FilePropertiesDialog->resize(448, 231);
        FilePropertiesDialog->setMinimumSize(QSize(448, 231));
        FilePropertiesDialog->setMaximumSize(QSize(589, 330));
        actionPropertyChanged = new QAction(FilePropertiesDialog);
        actionPropertyChanged->setObjectName("actionPropertyChanged");
        gridLayout_2 = new QGridLayout(FilePropertiesDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(FilePropertiesDialog);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(FilePropertiesDialog);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(FilePropertiesDialog);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        uiIterations = new QComboBox(FilePropertiesDialog);
        uiIterations->setObjectName("uiIterations");
        uiIterations->setEditable(true);

        gridLayout_2->addWidget(uiIterations, 2, 1, 1, 1);

        label_3 = new QLabel(FilePropertiesDialog);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        uiSalt = new QLabel(FilePropertiesDialog);
        uiSalt->setObjectName("uiSalt");
        uiSalt->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(uiSalt, 3, 1, 1, 1);

        label = new QLabel(FilePropertiesDialog);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        uiCompressionAlgo = new QComboBox(FilePropertiesDialog);
        uiCompressionAlgo->addItem(QString());
        uiCompressionAlgo->addItem(QString());
        uiCompressionAlgo->setObjectName("uiCompressionAlgo");

        gridLayout_2->addWidget(uiCompressionAlgo, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(FilePropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setMinimumSize(QSize(0, 35));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 6, 0, 1, 2);

        uiHashAlgo = new QComboBox(FilePropertiesDialog);
        uiHashAlgo->addItem(QString());
        uiHashAlgo->addItem(QString());
        uiHashAlgo->setObjectName("uiHashAlgo");

        gridLayout_2->addWidget(uiHashAlgo, 1, 1, 1, 1);

        uiCipherAlgo = new QComboBox(FilePropertiesDialog);
        uiCipherAlgo->addItem(QString());
        uiCipherAlgo->addItem(QString());
        uiCipherAlgo->addItem(QString());
        uiCipherAlgo->addItem(QString());
        uiCipherAlgo->setObjectName("uiCipherAlgo");

        gridLayout_2->addWidget(uiCipherAlgo, 0, 1, 1, 1);

        uiPath = new QLineEdit(FilePropertiesDialog);
        uiPath->setObjectName("uiPath");
        uiPath->setReadOnly(true);

        gridLayout_2->addWidget(uiPath, 5, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(uiIterations);
        label_2->setBuddy(uiHashAlgo);
        label_3->setBuddy(uiCompressionAlgo);
        label->setBuddy(uiCipherAlgo);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(uiCipherAlgo, uiHashAlgo);
        QWidget::setTabOrder(uiHashAlgo, uiIterations);
        QWidget::setTabOrder(uiIterations, uiCompressionAlgo);

        retranslateUi(FilePropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FilePropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FilePropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FilePropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *FilePropertiesDialog)
    {
        FilePropertiesDialog->setWindowTitle(QCoreApplication::translate("FilePropertiesDialog", "File Properties", nullptr));
        actionPropertyChanged->setText(QCoreApplication::translate("FilePropertiesDialog", "PropertyChanged", nullptr));
        label_4->setText(QCoreApplication::translate("FilePropertiesDialog", "Iterations:", nullptr));
        label_2->setText(QCoreApplication::translate("FilePropertiesDialog", "Hash:", nullptr));
        label_5->setText(QCoreApplication::translate("FilePropertiesDialog", "Salt:", nullptr));
        label_3->setText(QCoreApplication::translate("FilePropertiesDialog", "Compression:", nullptr));
        uiSalt->setText(QCoreApplication::translate("FilePropertiesDialog", "FFFFFFFFFFFFFFFF", nullptr));
        label->setText(QCoreApplication::translate("FilePropertiesDialog", "Algorithm:", nullptr));
        uiCompressionAlgo->setItemText(0, QCoreApplication::translate("FilePropertiesDialog", "ZIP", "1"));
        uiCompressionAlgo->setItemText(1, QCoreApplication::translate("FilePropertiesDialog", "ZLIB", "2"));

        uiHashAlgo->setItemText(0, QCoreApplication::translate("FilePropertiesDialog", "SHA-1", "2"));
        uiHashAlgo->setItemText(1, QCoreApplication::translate("FilePropertiesDialog", "SHA-256 (recommended)", "8"));

        uiCipherAlgo->setItemText(0, QCoreApplication::translate("FilePropertiesDialog", "Triple DES", "2"));
        uiCipherAlgo->setItemText(1, QCoreApplication::translate("FilePropertiesDialog", "CAST5", "3"));
        uiCipherAlgo->setItemText(2, QCoreApplication::translate("FilePropertiesDialog", "AES-128", "7"));
        uiCipherAlgo->setItemText(3, QCoreApplication::translate("FilePropertiesDialog", "AES-256 (recommended)", "9"));

    } // retranslateUi

};

namespace Ui {
    class FilePropertiesDialog: public Ui_FilePropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_PROPERTIES_DIALOG_H
