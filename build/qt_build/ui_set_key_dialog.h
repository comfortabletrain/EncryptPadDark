/********************************************************************************
** Form generated from reading UI file 'set_key_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_KEY_DIALOG_H
#define UI_SET_KEY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SetKeyDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QFrame *line;
    QLineEdit *uiKeyFilePath;
    QFrame *line_2;
    QPushButton *uiFileDialog;
    QListView *uiRepositoryListView;
    QLabel *lblKeyFilePath;
    QCheckBox *uiPersistKeyLocation;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetKeyDialog)
    {
        if (SetKeyDialog->objectName().isEmpty())
            SetKeyDialog->setObjectName("SetKeyDialog");
        SetKeyDialog->setWindowModality(Qt::ApplicationModal);
        SetKeyDialog->resize(623, 393);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SetKeyDialog->sizePolicy().hasHeightForWidth());
        SetKeyDialog->setSizePolicy(sizePolicy);
        SetKeyDialog->setMinimumSize(QSize(523, 387));
        SetKeyDialog->setLayoutDirection(Qt::LeftToRight);
        SetKeyDialog->setStyleSheet(QString::fromUtf8(""));
        SetKeyDialog->setModal(true);
        gridLayout = new QGridLayout(SetKeyDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(SetKeyDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        line = new QFrame(SetKeyDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line, 3, 0, 1, 3);

        uiKeyFilePath = new QLineEdit(SetKeyDialog);
        uiKeyFilePath->setObjectName("uiKeyFilePath");
        uiKeyFilePath->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(uiKeyFilePath->sizePolicy().hasHeightForWidth());
        uiKeyFilePath->setSizePolicy(sizePolicy1);
        uiKeyFilePath->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(uiKeyFilePath, 0, 1, 1, 1);

        line_2 = new QFrame(SetKeyDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line_2, 5, 0, 1, 3);

        uiFileDialog = new QPushButton(SetKeyDialog);
        uiFileDialog->setObjectName("uiFileDialog");
        sizePolicy1.setHeightForWidth(uiFileDialog->sizePolicy().hasHeightForWidth());
        uiFileDialog->setSizePolicy(sizePolicy1);
        uiFileDialog->setBaseSize(QSize(0, 0));
        uiFileDialog->setLayoutDirection(Qt::RightToLeft);
        uiFileDialog->setAutoDefault(false);
        uiFileDialog->setFlat(false);

        gridLayout_2->addWidget(uiFileDialog, 0, 2, 1, 1);

        uiRepositoryListView = new QListView(SetKeyDialog);
        uiRepositoryListView->setObjectName("uiRepositoryListView");

        gridLayout_2->addWidget(uiRepositoryListView, 1, 1, 1, 1);

        lblKeyFilePath = new QLabel(SetKeyDialog);
        lblKeyFilePath->setObjectName("lblKeyFilePath");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblKeyFilePath->sizePolicy().hasHeightForWidth());
        lblKeyFilePath->setSizePolicy(sizePolicy2);
        lblKeyFilePath->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(lblKeyFilePath, 0, 0, 1, 1);

        uiPersistKeyLocation = new QCheckBox(SetKeyDialog);
        uiPersistKeyLocation->setObjectName("uiPersistKeyLocation");

        gridLayout_2->addWidget(uiPersistKeyLocation, 4, 1, 1, 1);

        label_2 = new QLabel(SetKeyDialog);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(8);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 3);

        buttonBox = new QDialogButtonBox(SetKeyDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setMinimumSize(QSize(0, 35));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 6, 0, 1, 3);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(uiRepositoryListView);
        lblKeyFilePath->setBuddy(uiKeyFilePath);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(uiKeyFilePath, uiFileDialog);
        QWidget::setTabOrder(uiFileDialog, uiRepositoryListView);
        QWidget::setTabOrder(uiRepositoryListView, uiPersistKeyLocation);

        retranslateUi(SetKeyDialog);
        QObject::connect(uiKeyFilePath, &QLineEdit::textChanged, uiRepositoryListView, qOverload<>(&QListView::clearSelection));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SetKeyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SetKeyDialog, qOverload<>(&QDialog::reject));
        QObject::connect(uiRepositoryListView, &QListView::doubleClicked, SetKeyDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(SetKeyDialog);
    } // setupUi

    void retranslateUi(QDialog *SetKeyDialog)
    {
        SetKeyDialog->setWindowTitle(QCoreApplication::translate("SetKeyDialog", "Set Encryption Key", nullptr));
        label->setText(QCoreApplication::translate("SetKeyDialog", "Key &repository:", nullptr));
        uiFileDialog->setText(QCoreApplication::translate("SetKeyDialog", "&Browse\342\200\246", nullptr));
        lblKeyFilePath->setText(QCoreApplication::translate("SetKeyDialog", "&Key file path:", nullptr));
        uiPersistKeyLocation->setText(QCoreApplication::translate("SetKeyDialog", "&Persistent key location in the encrypted file", nullptr));
        label_2->setText(QCoreApplication::translate("SetKeyDialog", "The repository is <b>.encryptpad</b> folder in the user's profile (<b>encryptpad_repository</b> in portable mode). Select a key or specify a file name without path for the repository keys.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetKeyDialog: public Ui_SetKeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_KEY_DIALOG_H
