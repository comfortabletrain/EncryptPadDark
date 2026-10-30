/********************************************************************************
** Form generated from reading UI file 'new_key_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_KEY_DIALOG_H
#define UI_NEW_KEY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_NewKeyDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QRadioButton *uiCreate;
    QRadioButton *uiCreateInRepository;
    QLineEdit *uiKeyPath;
    QLabel *label;
    QPushButton *uiKeyPathBrowse;
    QLineEdit *uiRepositoryKeyName;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewKeyDialog)
    {
        if (NewKeyDialog->objectName().isEmpty())
            NewKeyDialog->setObjectName("NewKeyDialog");
        NewKeyDialog->resize(596, 220);
        NewKeyDialog->setMinimumSize(QSize(593, 214));
        NewKeyDialog->setMaximumSize(QSize(775, 251));
        gridLayout = new QGridLayout(NewKeyDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        uiCreate = new QRadioButton(NewKeyDialog);
        uiCreate->setObjectName("uiCreate");
        uiCreate->setChecked(true);

        gridLayout_2->addWidget(uiCreate, 0, 0, 1, 1);

        uiCreateInRepository = new QRadioButton(NewKeyDialog);
        uiCreateInRepository->setObjectName("uiCreateInRepository");

        gridLayout_2->addWidget(uiCreateInRepository, 2, 0, 1, 1);

        uiKeyPath = new QLineEdit(NewKeyDialog);
        uiKeyPath->setObjectName("uiKeyPath");

        gridLayout_2->addWidget(uiKeyPath, 0, 1, 1, 1);

        label = new QLabel(NewKeyDialog);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(8);
        label->setFont(font);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 3, 0, 1, 3);

        uiKeyPathBrowse = new QPushButton(NewKeyDialog);
        uiKeyPathBrowse->setObjectName("uiKeyPathBrowse");

        gridLayout_2->addWidget(uiKeyPathBrowse, 0, 2, 1, 1);

        uiRepositoryKeyName = new QLineEdit(NewKeyDialog);
        uiRepositoryKeyName->setObjectName("uiRepositoryKeyName");
        uiRepositoryKeyName->setEnabled(false);

        gridLayout_2->addWidget(uiRepositoryKeyName, 2, 1, 1, 1);

        line = new QFrame(NewKeyDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 3);

        buttonBox = new QDialogButtonBox(NewKeyDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setMinimumSize(QSize(35, 0));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 4, 0, 1, 3);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        QWidget::setTabOrder(uiCreate, uiKeyPath);
        QWidget::setTabOrder(uiKeyPath, uiKeyPathBrowse);
        QWidget::setTabOrder(uiKeyPathBrowse, uiCreateInRepository);
        QWidget::setTabOrder(uiCreateInRepository, uiRepositoryKeyName);

        retranslateUi(NewKeyDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewKeyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewKeyDialog, qOverload<>(&QDialog::reject));
        QObject::connect(uiCreate, &QRadioButton::toggled, uiKeyPath, &QLineEdit::setEnabled);
        QObject::connect(uiCreateInRepository, &QRadioButton::toggled, uiRepositoryKeyName, &QLineEdit::setEnabled);
        QObject::connect(uiKeyPathBrowse, SIGNAL(clicked()), NewKeyDialog, SLOT(browseForKeyPath()));
        QObject::connect(uiCreate, &QRadioButton::toggled, uiKeyPathBrowse, &QPushButton::setEnabled);

        QMetaObject::connectSlotsByName(NewKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *NewKeyDialog)
    {
        NewKeyDialog->setWindowTitle(QCoreApplication::translate("NewKeyDialog", "Generate Key", nullptr));
        uiCreate->setText(QCoreApplication::translate("NewKeyDialog", "&Key path", nullptr));
        uiCreateInRepository->setText(QCoreApplication::translate("NewKeyDialog", "Key in &repository", nullptr));
#if QT_CONFIG(tooltip)
        uiKeyPath->setToolTip(QCoreApplication::translate("NewKeyDialog", "Key path", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("NewKeyDialog", "The repository is <b>.encryptpad</b> folder in the user's profile (<b>encryptpad_repository</b> in portable mode).", nullptr));
        uiKeyPathBrowse->setText(QCoreApplication::translate("NewKeyDialog", "Browse\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        uiRepositoryKeyName->setToolTip(QCoreApplication::translate("NewKeyDialog", "Key name in the repository", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class NewKeyDialog: public Ui_NewKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_KEY_DIALOG_H
