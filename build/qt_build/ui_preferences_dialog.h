/********************************************************************************
** Form generated from reading UI file 'preferences_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_DIALOG_H
#define UI_PREFERENCES_DIALOG_H

#include <QtCore/QVariant>
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *uiGeneral;
    QGridLayout *gridLayout_3;
    QPushButton *uiEditKeyFileProperties;
    QLabel *label_9;
    QComboBox *uiKeyFileLength;
    QLabel *label_3;
    QCheckBox *uiEnableFakeVim;
    QPushButton *uiDefaultFileProperties;
    QComboBox *uiS2KResultsPoolSize;
    QCheckBox *uiDisplayLineNumbers;
    QFrame *line_3;
    QFrame *line_2;
    QLabel *label_7;
    QCheckBox *uiWindowsEol;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *uiTabSize;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *uiLibcurlBrowse;
    QCheckBox *uiLastUsedDirectory;
    QLabel *label_4;
    QLabel *uiFontFamily;
    QCheckBox *uiWordWrap;
    QLineEdit *uiLibcurlParameters;
    QLabel *label_2;
    QLabel *label;
    QFrame *line_4;
    QCheckBox *uiEnableBakFiles;
    QLineEdit *uiLibcurl;
    QPushButton *uiSelectFont;
    QHBoxLayout *layout_2;
    QSpinBox *uiRecentFiles;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_8;
    QWidget *uiAppearance;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_theme;
    QLabel *label_theme;
    QComboBox *uiColorTheme;
    QSpacerItem *horizontalSpacer_theme;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QComboBox *uiIconTheme;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName("PreferencesDialog");
        PreferencesDialog->resize(580, 560);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PreferencesDialog->sizePolicy().hasHeightForWidth());
        PreferencesDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(PreferencesDialog);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName("tabWidget");
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(562, 512));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        uiGeneral = new QWidget();
        uiGeneral->setObjectName("uiGeneral");
        gridLayout_3 = new QGridLayout(uiGeneral);
        gridLayout_3->setObjectName("gridLayout_3");
        uiEditKeyFileProperties = new QPushButton(uiGeneral);
        uiEditKeyFileProperties->setObjectName("uiEditKeyFileProperties");

        gridLayout_3->addWidget(uiEditKeyFileProperties, 17, 2, 1, 1);

        label_9 = new QLabel(uiGeneral);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        uiKeyFileLength = new QComboBox(uiGeneral);
        uiKeyFileLength->addItem(QString());
        uiKeyFileLength->addItem(QString());
        uiKeyFileLength->addItem(QString());
        uiKeyFileLength->addItem(QString());
        uiKeyFileLength->setObjectName("uiKeyFileLength");

        gridLayout_3->addWidget(uiKeyFileLength, 19, 2, 1, 1);

        label_3 = new QLabel(uiGeneral);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 13, 0, 1, 1);

        uiEnableFakeVim = new QCheckBox(uiGeneral);
        uiEnableFakeVim->setObjectName("uiEnableFakeVim");

        gridLayout_3->addWidget(uiEnableFakeVim, 6, 1, 1, 1);

        uiDefaultFileProperties = new QPushButton(uiGeneral);
        uiDefaultFileProperties->setObjectName("uiDefaultFileProperties");

        gridLayout_3->addWidget(uiDefaultFileProperties, 16, 2, 1, 1);

        uiS2KResultsPoolSize = new QComboBox(uiGeneral);
        uiS2KResultsPoolSize->addItem(QString::fromUtf8("1"));
        uiS2KResultsPoolSize->addItem(QString::fromUtf8("2"));
        uiS2KResultsPoolSize->addItem(QString::fromUtf8("8"));
        uiS2KResultsPoolSize->addItem(QString::fromUtf8("16"));
        uiS2KResultsPoolSize->addItem(QString::fromUtf8("32"));
        uiS2KResultsPoolSize->addItem(QString::fromUtf8("128"));
        uiS2KResultsPoolSize->setObjectName("uiS2KResultsPoolSize");

        gridLayout_3->addWidget(uiS2KResultsPoolSize, 18, 2, 1, 1);

        uiDisplayLineNumbers = new QCheckBox(uiGeneral);
        uiDisplayLineNumbers->setObjectName("uiDisplayLineNumbers");

        gridLayout_3->addWidget(uiDisplayLineNumbers, 1, 1, 1, 1);

        line_3 = new QFrame(uiGeneral);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_3->addWidget(line_3, 15, 0, 1, 3);

        line_2 = new QFrame(uiGeneral);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_3->addWidget(line_2, 12, 0, 1, 3);

        label_7 = new QLabel(uiGeneral);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 14, 0, 1, 1);

        uiWindowsEol = new QCheckBox(uiGeneral);
        uiWindowsEol->setObjectName("uiWindowsEol");

        gridLayout_3->addWidget(uiWindowsEol, 3, 1, 1, 1);

        line = new QFrame(uiGeneral);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_3->addWidget(line, 5, 0, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        uiTabSize = new QSpinBox(uiGeneral);
        uiTabSize->setObjectName("uiTabSize");
        uiTabSize->setMinimum(1);
        uiTabSize->setMaximum(40);
        uiTabSize->setValue(4);

        horizontalLayout_5->addWidget(uiTabSize);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        uiLibcurlBrowse = new QPushButton(uiGeneral);
        uiLibcurlBrowse->setObjectName("uiLibcurlBrowse");

        gridLayout_3->addWidget(uiLibcurlBrowse, 13, 2, 1, 1);

        uiLastUsedDirectory = new QCheckBox(uiGeneral);
        uiLastUsedDirectory->setObjectName("uiLastUsedDirectory");

        gridLayout_3->addWidget(uiLastUsedDirectory, 10, 1, 1, 1);

        label_4 = new QLabel(uiGeneral);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 16, 0, 1, 2);

        uiFontFamily = new QLabel(uiGeneral);
        uiFontFamily->setObjectName("uiFontFamily");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(uiFontFamily->sizePolicy().hasHeightForWidth());
        uiFontFamily->setSizePolicy(sizePolicy1);
        uiFontFamily->setFocusPolicy(Qt::TabFocus);
        uiFontFamily->setLayoutDirection(Qt::LeftToRight);
        uiFontFamily->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(uiFontFamily, 0, 1, 1, 1);

        uiWordWrap = new QCheckBox(uiGeneral);
        uiWordWrap->setObjectName("uiWordWrap");
        uiWordWrap->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(uiWordWrap, 2, 1, 1, 1);

        uiLibcurlParameters = new QLineEdit(uiGeneral);
        uiLibcurlParameters->setObjectName("uiLibcurlParameters");

        gridLayout_3->addWidget(uiLibcurlParameters, 14, 1, 1, 2);

        label_2 = new QLabel(uiGeneral);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_2, 9, 0, 1, 1);

        label = new QLabel(uiGeneral);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        line_4 = new QFrame(uiGeneral);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_3->addWidget(line_4, 8, 0, 1, 3);

        uiEnableBakFiles = new QCheckBox(uiGeneral);
        uiEnableBakFiles->setObjectName("uiEnableBakFiles");

        gridLayout_3->addWidget(uiEnableBakFiles, 11, 1, 1, 1);

        uiLibcurl = new QLineEdit(uiGeneral);
        uiLibcurl->setObjectName("uiLibcurl");

        gridLayout_3->addWidget(uiLibcurl, 13, 1, 1, 1);

        uiSelectFont = new QPushButton(uiGeneral);
        uiSelectFont->setObjectName("uiSelectFont");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(uiSelectFont->sizePolicy().hasHeightForWidth());
        uiSelectFont->setSizePolicy(sizePolicy3);
        uiSelectFont->setMinimumSize(QSize(100, 0));
        uiSelectFont->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(uiSelectFont, 0, 2, 1, 1);

        layout_2 = new QHBoxLayout();
        layout_2->setObjectName("layout_2");
        uiRecentFiles = new QSpinBox(uiGeneral);
        uiRecentFiles->setObjectName("uiRecentFiles");
        uiRecentFiles->setMaximum(10);

        layout_2->addWidget(uiRecentFiles);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layout_2->addItem(horizontalSpacer);


        gridLayout_3->addLayout(layout_2, 9, 1, 1, 1);

        label_6 = new QLabel(uiGeneral);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 17, 0, 1, 2);

        label_5 = new QLabel(uiGeneral);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 18, 0, 1, 2);

        label_8 = new QLabel(uiGeneral);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 19, 0, 1, 2);

        tabWidget->addTab(uiGeneral, QString());
        uiAppearance = new QWidget();
        uiAppearance->setObjectName("uiAppearance");
        gridLayout_2 = new QGridLayout(uiAppearance);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_theme = new QHBoxLayout();
        horizontalLayout_theme->setObjectName("horizontalLayout_theme");
        label_theme = new QLabel(uiAppearance);
        label_theme->setObjectName("label_theme");

        horizontalLayout_theme->addWidget(label_theme);

        uiColorTheme = new QComboBox(uiAppearance);
        uiColorTheme->addItem(QString());
        uiColorTheme->addItem(QString());
        uiColorTheme->addItem(QString());
        uiColorTheme->addItem(QString());
        uiColorTheme->addItem(QString());
        uiColorTheme->addItem(QString());
        uiColorTheme->addItem(QString());
        uiColorTheme->addItem(QString());
        uiColorTheme->setObjectName("uiColorTheme");

        horizontalLayout_theme->addWidget(uiColorTheme);

        horizontalSpacer_theme = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_theme->addItem(horizontalSpacer_theme);


        gridLayout_2->addLayout(horizontalLayout_theme, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_10 = new QLabel(uiAppearance);
        label_10->setObjectName("label_10");

        horizontalLayout_6->addWidget(label_10);

        uiIconTheme = new QComboBox(uiAppearance);
        uiIconTheme->addItem(QString());
        uiIconTheme->addItem(QString());
        uiIconTheme->addItem(QString());
        uiIconTheme->setObjectName("uiIconTheme");

        horizontalLayout_6->addWidget(uiIconTheme);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        tabWidget->addTab(uiAppearance, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_9->setBuddy(uiTabSize);
        label_3->setBuddy(uiLibcurl);
        label_7->setBuddy(uiLibcurlParameters);
        label_4->setBuddy(uiDefaultFileProperties);
        label_2->setBuddy(uiRecentFiles);
        label->setBuddy(uiSelectFont);
        label_6->setBuddy(uiEditKeyFileProperties);
        label_5->setBuddy(uiS2KResultsPoolSize);
        label_8->setBuddy(uiKeyFileLength);
        label_theme->setBuddy(uiColorTheme);
        label_10->setBuddy(uiIconTheme);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, uiFontFamily);
        QWidget::setTabOrder(uiFontFamily, uiSelectFont);
        QWidget::setTabOrder(uiSelectFont, uiDisplayLineNumbers);
        QWidget::setTabOrder(uiDisplayLineNumbers, uiWordWrap);
        QWidget::setTabOrder(uiWordWrap, uiWindowsEol);
        QWidget::setTabOrder(uiWindowsEol, uiTabSize);
        QWidget::setTabOrder(uiTabSize, uiEnableFakeVim);
        QWidget::setTabOrder(uiEnableFakeVim, uiRecentFiles);
        QWidget::setTabOrder(uiRecentFiles, uiLastUsedDirectory);
        QWidget::setTabOrder(uiLastUsedDirectory, uiEnableBakFiles);
        QWidget::setTabOrder(uiEnableBakFiles, uiLibcurl);
        QWidget::setTabOrder(uiLibcurl, uiLibcurlBrowse);
        QWidget::setTabOrder(uiLibcurlBrowse, uiLibcurlParameters);
        QWidget::setTabOrder(uiLibcurlParameters, uiDefaultFileProperties);
        QWidget::setTabOrder(uiDefaultFileProperties, uiEditKeyFileProperties);
        QWidget::setTabOrder(uiEditKeyFileProperties, uiS2KResultsPoolSize);
        QWidget::setTabOrder(uiS2KResultsPoolSize, uiKeyFileLength);
        QWidget::setTabOrder(uiKeyFileLength, uiColorTheme);
        QWidget::setTabOrder(uiColorTheme, uiIconTheme);

        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PreferencesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PreferencesDialog, qOverload<>(&QDialog::reject));
        QObject::connect(uiSelectFont, SIGNAL(clicked()), PreferencesDialog, SLOT(selectFont()));
        QObject::connect(uiEditKeyFileProperties, SIGNAL(clicked()), PreferencesDialog, SLOT(editKeyFileProperties()));
        QObject::connect(uiDefaultFileProperties, SIGNAL(clicked()), PreferencesDialog, SLOT(editDefaultFileProperties()));

        tabWidget->setCurrentIndex(0);
        uiS2KResultsPoolSize->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        uiEditKeyFileProperties->setText(QCoreApplication::translate("PreferencesDialog", "Edit\342\200\246", nullptr));
        label_9->setText(QCoreApplication::translate("PreferencesDialog", "Tab size:", nullptr));
        uiKeyFileLength->setItemText(0, QCoreApplication::translate("PreferencesDialog", "32", nullptr));
        uiKeyFileLength->setItemText(1, QCoreApplication::translate("PreferencesDialog", "64", nullptr));
        uiKeyFileLength->setItemText(2, QCoreApplication::translate("PreferencesDialog", "128", nullptr));
        uiKeyFileLength->setItemText(3, QCoreApplication::translate("PreferencesDialog", "256", nullptr));

#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("PreferencesDialog", "Path to libCURL executable", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("PreferencesDialog", "Libcurl path:", nullptr));
        uiEnableFakeVim->setText(QCoreApplication::translate("PreferencesDialog", "Enable FakeVim (restart required)", nullptr));
        uiDefaultFileProperties->setText(QCoreApplication::translate("PreferencesDialog", "Edit\342\200\246", nullptr));

        uiDisplayLineNumbers->setText(QCoreApplication::translate("PreferencesDialog", "Display line numbers", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("PreferencesDialog", "Libcurl command line parameters", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("PreferencesDialog", "Parameters:", nullptr));
#if QT_CONFIG(tooltip)
        uiWindowsEol->setToolTip(QCoreApplication::translate("PreferencesDialog", "\"Windows\" end of line: CR+LF", nullptr));
#endif // QT_CONFIG(tooltip)
        uiWindowsEol->setText(QCoreApplication::translate("PreferencesDialog", "\"Windows\" end of line: CR+LF", nullptr));
        uiLibcurlBrowse->setText(QCoreApplication::translate("PreferencesDialog", "Browse\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        uiLastUsedDirectory->setToolTip(QCoreApplication::translate("PreferencesDialog", "Retain last used folder between EncryptPad sessions", nullptr));
#endif // QT_CONFIG(tooltip)
        uiLastUsedDirectory->setText(QCoreApplication::translate("PreferencesDialog", "Save last used folder", nullptr));
        label_4->setText(QCoreApplication::translate("PreferencesDialog", "Default file properties:", nullptr));
        uiFontFamily->setText(QCoreApplication::translate("PreferencesDialog", "[example: Monospace (Size: 12)]", nullptr));
        uiWordWrap->setText(QCoreApplication::translate("PreferencesDialog", "Word wrap", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDialog", "Recent files:", nullptr));
        label->setText(QCoreApplication::translate("PreferencesDialog", "Font:", nullptr));
        uiEnableBakFiles->setText(QCoreApplication::translate("PreferencesDialog", "Create .bak files", nullptr));
        uiSelectFont->setText(QCoreApplication::translate("PreferencesDialog", "Font\342\200\246", nullptr));
        label_6->setText(QCoreApplication::translate("PreferencesDialog", "Key file encryption properties:", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("PreferencesDialog", "This controls how many times you can save without entering a passphrase", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("PreferencesDialog", "S2K derivations from a passphrase:", nullptr));
        label_8->setText(QCoreApplication::translate("PreferencesDialog", "Key file random sequence length (bytes):", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(uiGeneral), QCoreApplication::translate("PreferencesDialog", "General", nullptr));
        label_theme->setText(QCoreApplication::translate("PreferencesDialog", "Theme:", nullptr));
        uiColorTheme->setItemText(0, QCoreApplication::translate("PreferencesDialog", "System Default", nullptr));
        uiColorTheme->setItemText(1, QCoreApplication::translate("PreferencesDialog", "Dracula", nullptr));
        uiColorTheme->setItemText(2, QCoreApplication::translate("PreferencesDialog", "Solarized Dark", nullptr));
        uiColorTheme->setItemText(3, QCoreApplication::translate("PreferencesDialog", "Solarized Light", nullptr));
        uiColorTheme->setItemText(4, QCoreApplication::translate("PreferencesDialog", "Nord", nullptr));
        uiColorTheme->setItemText(5, QCoreApplication::translate("PreferencesDialog", "Monokai", nullptr));
        uiColorTheme->setItemText(6, QCoreApplication::translate("PreferencesDialog", "One Dark", nullptr));
        uiColorTheme->setItemText(7, QCoreApplication::translate("PreferencesDialog", "Gruvbox Dark", nullptr));

        label_10->setText(QCoreApplication::translate("PreferencesDialog", "Icon theme (restart required):", nullptr));
        uiIconTheme->setItemText(0, QCoreApplication::translate("PreferencesDialog", "Auto", nullptr));
        uiIconTheme->setItemText(1, QCoreApplication::translate("PreferencesDialog", "Light", nullptr));
        uiIconTheme->setItemText(2, QCoreApplication::translate("PreferencesDialog", "Dark", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(uiAppearance), QCoreApplication::translate("PreferencesDialog", "Appearance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_DIALOG_H
