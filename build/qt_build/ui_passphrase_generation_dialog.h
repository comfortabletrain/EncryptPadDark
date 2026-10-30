/********************************************************************************
** Form generated from reading UI file 'passphrase_generation_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSPHRASE_GENERATION_DIALOG_H
#define UI_PASSPHRASE_GENERATION_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PassphraseGenerationDialog
{
public:
    QAction *actionRegenerate;
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout;
    QSpinBox *uiCustomSymbolsMax;
    QCheckBox *uiCustomSymbols;
    QCheckBox *uiLowerAtoZ;
    QCheckBox *uiNumbers;
    QCheckBox *uiSymbols;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *uiLength8;
    QRadioButton *uiLength12;
    QRadioButton *uiLength16;
    QRadioButton *uiCustomLength;
    QSpinBox *uiCustomLengthValue;
    QSpinBox *uiLowerAtoZMax;
    QCheckBox *uiUpperAtoZ;
    QSpinBox *uiNumbersMax;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *uiPassphraseCount;
    QPushButton *uiRegenerate;
    QPushButton *uiInsertAll;
    QLineEdit *uiCustomSymbolsValue;
    QSpinBox *uiUpperAtoZMax;
    QSpinBox *uiSymbolsMax;
    QLabel *label;
    QLabel *label_4;
    QListWidget *uiPassphrases;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_5;

    void setupUi(QDialog *PassphraseGenerationDialog)
    {
        if (PassphraseGenerationDialog->objectName().isEmpty())
            PassphraseGenerationDialog->setObjectName("PassphraseGenerationDialog");
        PassphraseGenerationDialog->resize(498, 571);
        PassphraseGenerationDialog->setMinimumSize(QSize(465, 457));
        actionRegenerate = new QAction(PassphraseGenerationDialog);
        actionRegenerate->setObjectName("actionRegenerate");
        gridLayout_2 = new QGridLayout(PassphraseGenerationDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        buttonBox = new QDialogButtonBox(PassphraseGenerationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        uiCustomSymbolsMax = new QSpinBox(PassphraseGenerationDialog);
        uiCustomSymbolsMax->setObjectName("uiCustomSymbolsMax");
        uiCustomSymbolsMax->setEnabled(false);
        uiCustomSymbolsMax->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        uiCustomSymbolsMax->setMinimum(1);
        uiCustomSymbolsMax->setValue(99);

        gridLayout->addWidget(uiCustomSymbolsMax, 9, 2, 1, 1);

        uiCustomSymbols = new QCheckBox(PassphraseGenerationDialog);
        uiCustomSymbols->setObjectName("uiCustomSymbols");

        gridLayout->addWidget(uiCustomSymbols, 8, 0, 1, 2);

        uiLowerAtoZ = new QCheckBox(PassphraseGenerationDialog);
        uiLowerAtoZ->setObjectName("uiLowerAtoZ");
        uiLowerAtoZ->setChecked(true);

        gridLayout->addWidget(uiLowerAtoZ, 3, 0, 1, 2);

        uiNumbers = new QCheckBox(PassphraseGenerationDialog);
        uiNumbers->setObjectName("uiNumbers");
        uiNumbers->setChecked(true);

        gridLayout->addWidget(uiNumbers, 5, 0, 1, 2);

        uiSymbols = new QCheckBox(PassphraseGenerationDialog);
        uiSymbols->setObjectName("uiSymbols");
        uiSymbols->setChecked(true);

        gridLayout->addWidget(uiSymbols, 6, 0, 1, 2);

        label_2 = new QLabel(PassphraseGenerationDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 7, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        uiLength8 = new QRadioButton(PassphraseGenerationDialog);
        uiLength8->setObjectName("uiLength8");

        horizontalLayout->addWidget(uiLength8);

        uiLength12 = new QRadioButton(PassphraseGenerationDialog);
        uiLength12->setObjectName("uiLength12");
        uiLength12->setChecked(true);

        horizontalLayout->addWidget(uiLength12);

        uiLength16 = new QRadioButton(PassphraseGenerationDialog);
        uiLength16->setObjectName("uiLength16");

        horizontalLayout->addWidget(uiLength16);

        uiCustomLength = new QRadioButton(PassphraseGenerationDialog);
        uiCustomLength->setObjectName("uiCustomLength");

        horizontalLayout->addWidget(uiCustomLength);

        uiCustomLengthValue = new QSpinBox(PassphraseGenerationDialog);
        uiCustomLengthValue->setObjectName("uiCustomLengthValue");
        uiCustomLengthValue->setEnabled(false);
        uiCustomLengthValue->setMaximum(128);
        uiCustomLengthValue->setValue(24);

        horizontalLayout->addWidget(uiCustomLengthValue);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 2);

        uiLowerAtoZMax = new QSpinBox(PassphraseGenerationDialog);
        uiLowerAtoZMax->setObjectName("uiLowerAtoZMax");
        uiLowerAtoZMax->setEnabled(true);
        uiLowerAtoZMax->setMinimum(1);
        uiLowerAtoZMax->setValue(99);

        gridLayout->addWidget(uiLowerAtoZMax, 3, 2, 1, 1);

        uiUpperAtoZ = new QCheckBox(PassphraseGenerationDialog);
        uiUpperAtoZ->setObjectName("uiUpperAtoZ");
        uiUpperAtoZ->setChecked(true);

        gridLayout->addWidget(uiUpperAtoZ, 4, 0, 1, 2);

        uiNumbersMax = new QSpinBox(PassphraseGenerationDialog);
        uiNumbersMax->setObjectName("uiNumbersMax");
        uiNumbersMax->setEnabled(true);
        uiNumbersMax->setMinimum(1);
        uiNumbersMax->setValue(99);

        gridLayout->addWidget(uiNumbersMax, 5, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        uiPassphraseCount = new QComboBox(PassphraseGenerationDialog);
        uiPassphraseCount->setObjectName("uiPassphraseCount");

        horizontalLayout_2->addWidget(uiPassphraseCount);

        uiRegenerate = new QPushButton(PassphraseGenerationDialog);
        uiRegenerate->setObjectName("uiRegenerate");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uiRegenerate->sizePolicy().hasHeightForWidth());
        uiRegenerate->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(uiRegenerate);

        uiInsertAll = new QPushButton(PassphraseGenerationDialog);
        uiInsertAll->setObjectName("uiInsertAll");

        horizontalLayout_2->addWidget(uiInsertAll);


        gridLayout->addLayout(horizontalLayout_2, 12, 0, 1, 3);

        uiCustomSymbolsValue = new QLineEdit(PassphraseGenerationDialog);
        uiCustomSymbolsValue->setObjectName("uiCustomSymbolsValue");
        uiCustomSymbolsValue->setEnabled(false);
        uiCustomSymbolsValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(uiCustomSymbolsValue, 9, 1, 1, 1);

        uiUpperAtoZMax = new QSpinBox(PassphraseGenerationDialog);
        uiUpperAtoZMax->setObjectName("uiUpperAtoZMax");
        uiUpperAtoZMax->setEnabled(true);
        uiUpperAtoZMax->setMinimum(1);
        uiUpperAtoZMax->setValue(99);

        gridLayout->addWidget(uiUpperAtoZMax, 4, 2, 1, 1);

        uiSymbolsMax = new QSpinBox(PassphraseGenerationDialog);
        uiSymbolsMax->setObjectName("uiSymbolsMax");
        uiSymbolsMax->setEnabled(true);
        uiSymbolsMax->setMinimum(1);
        uiSymbolsMax->setMaximum(99);
        uiSymbolsMax->setValue(2);

        gridLayout->addWidget(uiSymbolsMax, 7, 2, 1, 1);

        label = new QLabel(PassphraseGenerationDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(PassphraseGenerationDialog);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 10, 1, 1, 1);

        uiPassphrases = new QListWidget(PassphraseGenerationDialog);
        uiPassphrases->setObjectName("uiPassphrases");

        gridLayout->addWidget(uiPassphrases, 11, 0, 1, 3);

        line = new QFrame(PassphraseGenerationDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 3);

        label_3 = new QLabel(PassphraseGenerationDialog);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 2);

        label_5 = new QLabel(PassphraseGenerationDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(uiLength8);
        label_4->setBuddy(uiPassphrases);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(uiLength8, uiLength12);
        QWidget::setTabOrder(uiLength12, uiLength16);
        QWidget::setTabOrder(uiLength16, uiCustomLength);
        QWidget::setTabOrder(uiCustomLength, uiCustomLengthValue);
        QWidget::setTabOrder(uiCustomLengthValue, uiLowerAtoZ);
        QWidget::setTabOrder(uiLowerAtoZ, uiLowerAtoZMax);
        QWidget::setTabOrder(uiLowerAtoZMax, uiUpperAtoZ);
        QWidget::setTabOrder(uiUpperAtoZ, uiUpperAtoZMax);
        QWidget::setTabOrder(uiUpperAtoZMax, uiNumbers);
        QWidget::setTabOrder(uiNumbers, uiNumbersMax);
        QWidget::setTabOrder(uiNumbersMax, uiSymbols);
        QWidget::setTabOrder(uiSymbols, uiSymbolsMax);
        QWidget::setTabOrder(uiSymbolsMax, uiCustomSymbols);
        QWidget::setTabOrder(uiCustomSymbols, uiCustomSymbolsValue);
        QWidget::setTabOrder(uiCustomSymbolsValue, uiCustomSymbolsMax);
        QWidget::setTabOrder(uiCustomSymbolsMax, uiPassphrases);
        QWidget::setTabOrder(uiPassphrases, uiPassphraseCount);
        QWidget::setTabOrder(uiPassphraseCount, uiRegenerate);
        QWidget::setTabOrder(uiRegenerate, uiInsertAll);

        retranslateUi(PassphraseGenerationDialog);
        QObject::connect(uiCustomLengthValue, &QSpinBox::valueChanged, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PassphraseGenerationDialog, qOverload<>(&QDialog::reject));
        QObject::connect(uiCustomLength, &QRadioButton::toggled, uiCustomLengthValue, &QSpinBox::setEnabled);
        QObject::connect(uiLowerAtoZ, &QCheckBox::toggled, uiLowerAtoZMax, &QSpinBox::setEnabled);
        QObject::connect(uiUpperAtoZ, &QCheckBox::toggled, uiUpperAtoZMax, &QSpinBox::setEnabled);
        QObject::connect(uiNumbers, &QCheckBox::toggled, uiNumbersMax, &QSpinBox::setEnabled);
        QObject::connect(uiSymbols, &QCheckBox::toggled, uiSymbolsMax, &QSpinBox::setEnabled);
        QObject::connect(uiCustomSymbols, &QCheckBox::toggled, uiCustomSymbolsValue, &QLineEdit::setEnabled);
        QObject::connect(uiCustomSymbols, &QCheckBox::toggled, uiCustomSymbolsMax, &QSpinBox::setEnabled);
        QObject::connect(uiCustomLength, &QRadioButton::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiCustomSymbols, &QCheckBox::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiCustomSymbolsMax, &QSpinBox::valueChanged, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiCustomSymbolsValue, &QLineEdit::textChanged, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiLength12, &QRadioButton::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiLength8, &QRadioButton::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiLength16, &QRadioButton::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiLowerAtoZ, &QCheckBox::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiLowerAtoZMax, &QSpinBox::valueChanged, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiNumbers, &QCheckBox::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiNumbersMax, &QSpinBox::valueChanged, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiSymbolsMax, &QSpinBox::valueChanged, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiSymbols, &QCheckBox::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiRegenerate, &QPushButton::clicked, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiUpperAtoZ, &QCheckBox::toggled, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiUpperAtoZMax, &QSpinBox::valueChanged, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PassphraseGenerationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(uiPassphraseCount, &QComboBox::currentIndexChanged, actionRegenerate, qOverload<>(&QAction::trigger));
        QObject::connect(uiPassphrases, &QListWidget::doubleClicked, PassphraseGenerationDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(PassphraseGenerationDialog);
    } // setupUi

    void retranslateUi(QDialog *PassphraseGenerationDialog)
    {
        PassphraseGenerationDialog->setWindowTitle(QCoreApplication::translate("PassphraseGenerationDialog", "Generate Passphrase", nullptr));
        actionRegenerate->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Regenerate", nullptr));
        uiCustomSymbols->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Custom:", nullptr));
        uiLowerAtoZ->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Lowercase a-z", nullptr));
        uiNumbers->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Numbers 0-9", nullptr));
        uiSymbols->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Symbols:", nullptr));
        label_2->setText(QCoreApplication::translate("PassphraseGenerationDialog", "` ~ ! @ # $ % ^ & * ( ) _ - + = { } [ ]  | : ; \" ' < > , . ? /", nullptr));
        uiLength8->setText(QCoreApplication::translate("PassphraseGenerationDialog", "8", nullptr));
        uiLength12->setText(QCoreApplication::translate("PassphraseGenerationDialog", "12", nullptr));
        uiLength16->setText(QCoreApplication::translate("PassphraseGenerationDialog", "16", nullptr));
        uiCustomLength->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Custom", nullptr));
        uiUpperAtoZ->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Uppercase A-Z", nullptr));
        uiPassphraseCount->setCurrentText(QString());
        uiRegenerate->setText(QCoreApplication::translate("PassphraseGenerationDialog", "&Regenerate", nullptr));
        uiInsertAll->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Insert &all", nullptr));
        label->setText(QCoreApplication::translate("PassphraseGenerationDialog", "&Length:", nullptr));
        label_4->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Select &passphrase:", nullptr));
        label_3->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Limit group occurrence (1 to max chars)", nullptr));
        label_5->setText(QCoreApplication::translate("PassphraseGenerationDialog", "Groups", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PassphraseGenerationDialog: public Ui_PassphraseGenerationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSPHRASE_GENERATION_DIALOG_H
