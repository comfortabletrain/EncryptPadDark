/********************************************************************************
** Form generated from reading UI file 'find_and_replace.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_AND_REPLACE_H
#define UI_FIND_AND_REPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindAndReplace
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QCheckBox *uiMatchCase;
    QLineEdit *uiFind;
    QLineEdit *uiReplace;
    QCheckBox *uiWholeWord;
    QVBoxLayout *verticalLayout_5;
    QPushButton *uiFindNext;
    QPushButton *uiReplaceOne;
    QPushButton *uiReplaceAll;
    QPushButton *uiClose;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FindAndReplace)
    {
        if (FindAndReplace->objectName().isEmpty())
            FindAndReplace->setObjectName("FindAndReplace");
        FindAndReplace->resize(507, 162);
        FindAndReplace->setMinimumSize(QSize(425, 161));
        FindAndReplace->setMaximumSize(QSize(538, 203));
        gridLayout_2 = new QGridLayout(FindAndReplace);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(FindAndReplace);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(FindAndReplace);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        uiMatchCase = new QCheckBox(FindAndReplace);
        uiMatchCase->setObjectName("uiMatchCase");

        gridLayout->addWidget(uiMatchCase, 2, 1, 1, 1);

        uiFind = new QLineEdit(FindAndReplace);
        uiFind->setObjectName("uiFind");

        gridLayout->addWidget(uiFind, 0, 1, 1, 1);

        uiReplace = new QLineEdit(FindAndReplace);
        uiReplace->setObjectName("uiReplace");

        gridLayout->addWidget(uiReplace, 1, 1, 1, 1);

        uiWholeWord = new QCheckBox(FindAndReplace);
        uiWholeWord->setObjectName("uiWholeWord");

        gridLayout->addWidget(uiWholeWord, 3, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        uiFindNext = new QPushButton(FindAndReplace);
        uiFindNext->setObjectName("uiFindNext");
        uiFindNext->setEnabled(false);

        verticalLayout_5->addWidget(uiFindNext);

        uiReplaceOne = new QPushButton(FindAndReplace);
        uiReplaceOne->setObjectName("uiReplaceOne");
        uiReplaceOne->setEnabled(false);

        verticalLayout_5->addWidget(uiReplaceOne);

        uiReplaceAll = new QPushButton(FindAndReplace);
        uiReplaceAll->setObjectName("uiReplaceAll");
        uiReplaceAll->setEnabled(false);

        verticalLayout_5->addWidget(uiReplaceAll);

        uiClose = new QPushButton(FindAndReplace);
        uiClose->setObjectName("uiClose");

        verticalLayout_5->addWidget(uiClose);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_5, 0, 2, 4, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(uiReplace);
        label->setBuddy(uiFind);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(uiFind, uiReplace);
        QWidget::setTabOrder(uiReplace, uiFindNext);
        QWidget::setTabOrder(uiFindNext, uiReplaceOne);
        QWidget::setTabOrder(uiReplaceOne, uiReplaceAll);
        QWidget::setTabOrder(uiReplaceAll, uiClose);
        QWidget::setTabOrder(uiClose, uiMatchCase);
        QWidget::setTabOrder(uiMatchCase, uiWholeWord);

        retranslateUi(FindAndReplace);
        QObject::connect(uiClose, &QPushButton::clicked, FindAndReplace, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(FindAndReplace);
    } // setupUi

    void retranslateUi(QDialog *FindAndReplace)
    {
        FindAndReplace->setWindowTitle(QCoreApplication::translate("FindAndReplace", "Replace", nullptr));
        label_2->setText(QCoreApplication::translate("FindAndReplace", "&Replace with:", nullptr));
        label->setText(QCoreApplication::translate("FindAndReplace", "&Find:", nullptr));
        uiMatchCase->setText(QCoreApplication::translate("FindAndReplace", "Match case", nullptr));
        uiWholeWord->setText(QCoreApplication::translate("FindAndReplace", "Match whole word only", nullptr));
        uiFindNext->setText(QCoreApplication::translate("FindAndReplace", "Find Next", nullptr));
        uiReplaceOne->setText(QCoreApplication::translate("FindAndReplace", "Replace", nullptr));
        uiReplaceAll->setText(QCoreApplication::translate("FindAndReplace", "Replace All", nullptr));
        uiClose->setText(QCoreApplication::translate("FindAndReplace", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindAndReplace: public Ui_FindAndReplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_AND_REPLACE_H
