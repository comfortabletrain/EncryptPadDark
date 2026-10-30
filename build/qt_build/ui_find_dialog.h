/********************************************************************************
** Form generated from reading UI file 'find_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_DIALOG_H
#define UI_FIND_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QRadioButton *uiDown;
    QCheckBox *uiWholeWord;
    QRadioButton *uiUp;
    QCheckBox *uiMatchCase;
    QLabel *label;
    QLineEdit *uiFind;
    QVBoxLayout *verticalLayout_5;
    QPushButton *uiFindNext;
    QPushButton *uiClose;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName("FindDialog");
        FindDialog->resize(425, 115);
        FindDialog->setMinimumSize(QSize(425, 115));
        FindDialog->setMaximumSize(QSize(425, 115));
        gridLayout_2 = new QGridLayout(FindDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        uiDown = new QRadioButton(FindDialog);
        uiDown->setObjectName("uiDown");
        uiDown->setChecked(true);

        gridLayout->addWidget(uiDown, 2, 2, 1, 1);

        uiWholeWord = new QCheckBox(FindDialog);
        uiWholeWord->setObjectName("uiWholeWord");

        gridLayout->addWidget(uiWholeWord, 2, 1, 1, 1);

        uiUp = new QRadioButton(FindDialog);
        uiUp->setObjectName("uiUp");

        gridLayout->addWidget(uiUp, 1, 2, 1, 1);

        uiMatchCase = new QCheckBox(FindDialog);
        uiMatchCase->setObjectName("uiMatchCase");

        gridLayout->addWidget(uiMatchCase, 1, 1, 1, 1);

        label = new QLabel(FindDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        uiFind = new QLineEdit(FindDialog);
        uiFind->setObjectName("uiFind");

        gridLayout->addWidget(uiFind, 0, 1, 1, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        uiFindNext = new QPushButton(FindDialog);
        uiFindNext->setObjectName("uiFindNext");
        uiFindNext->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uiFindNext->sizePolicy().hasHeightForWidth());
        uiFindNext->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(uiFindNext);

        uiClose = new QPushButton(FindDialog);
        uiClose->setObjectName("uiClose");

        verticalLayout_5->addWidget(uiClose);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_5, 0, 3, 3, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(uiFind);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(uiFind, uiFindNext);
        QWidget::setTabOrder(uiFindNext, uiClose);
        QWidget::setTabOrder(uiClose, uiMatchCase);
        QWidget::setTabOrder(uiMatchCase, uiWholeWord);
        QWidget::setTabOrder(uiWholeWord, uiUp);
        QWidget::setTabOrder(uiUp, uiDown);

        retranslateUi(FindDialog);
        QObject::connect(uiClose, &QPushButton::clicked, FindDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QCoreApplication::translate("FindDialog", "Find", nullptr));
        uiDown->setText(QCoreApplication::translate("FindDialog", "&Down", nullptr));
        uiWholeWord->setText(QCoreApplication::translate("FindDialog", "Match whole &word only", nullptr));
        uiUp->setText(QCoreApplication::translate("FindDialog", "&Up", nullptr));
        uiMatchCase->setText(QCoreApplication::translate("FindDialog", "&Match case", nullptr));
        label->setText(QCoreApplication::translate("FindDialog", "&Find:", nullptr));
        uiFindNext->setText(QCoreApplication::translate("FindDialog", "Find &Next", nullptr));
        uiClose->setText(QCoreApplication::translate("FindDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_DIALOG_H
