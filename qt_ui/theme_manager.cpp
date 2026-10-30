#include "theme_manager.h"
#include "plain_text_edit.h"
#include <QApplication>
#include <QStyleFactory>
#include <QStyle>
#include <QColor>

namespace
{
    QString s_defaultStyleName;
    QPalette s_defaultPalette;
    bool s_initialized = false;

    const std::vector<ThemeDefinition> s_themes = {
        { ColorTheme::SystemDefault, "System Default", false },
        { ColorTheme::Dracula, "Dracula", true },
        { ColorTheme::SolarizedDark, "Solarized Dark", true },
        { ColorTheme::SolarizedLight, "Solarized Light", false },
        { ColorTheme::Nord, "Nord", true },
        { ColorTheme::Monokai, "Monokai", true },
        { ColorTheme::OneDark, "One Dark", true },
        { ColorTheme::GruvboxDark, "Gruvbox Dark", true }
    };

    struct ThemeColors
    {
        QColor window;
        QColor windowText;
        QColor base;
        QColor text;
        QColor altBase;
        QColor button;
        QColor buttonText;
        QColor brightText;
        QColor highlight;
        QColor highlightedText;
        QColor tooltipBase;
        QColor tooltipText;
        QColor disabledText;
        QColor gutterBg;
        QColor gutterText;
        QColor scrollBg;
        QColor scrollHandle;
        QColor scrollHover;
        QColor border;
    };

    ThemeColors getColorsForTheme(ColorTheme theme)
    {
        ThemeColors c;
        switch (theme)
        {
        case ColorTheme::Dracula:
            c.window          = QColor("#282a36");
            c.windowText      = QColor("#f8f8f2");
            c.base            = QColor("#282a36");
            c.text            = QColor("#f8f8f2");
            c.altBase         = QColor("#383a59");
            c.button          = QColor("#44475a");
            c.buttonText      = QColor("#f8f8f2");
            c.brightText      = QColor("#ffffff");
            c.highlight       = QColor("#bd93f9");
            c.highlightedText = QColor("#282a36");
            c.tooltipBase     = QColor("#21222c");
            c.tooltipText     = QColor("#f8f8f2");
            c.disabledText    = QColor("#6272a4");
            c.gutterBg        = QColor("#21222c");
            c.gutterText      = QColor("#6272a4");
            c.scrollBg        = QColor("#21222c");
            c.scrollHandle    = QColor("#44475a");
            c.scrollHover     = QColor("#6272a4");
            c.border          = QColor("#44475a");
            break;

        case ColorTheme::SolarizedDark:
            c.window          = QColor("#073642");
            c.windowText      = QColor("#93a1a1");
            c.base            = QColor("#002b36");
            c.text            = QColor("#839496");
            c.altBase         = QColor("#073642");
            c.button          = QColor("#073642");
            c.buttonText      = QColor("#93a1a1");
            c.brightText      = QColor("#fdf6e3");
            c.highlight       = QColor("#268bd2");
            c.highlightedText = QColor("#002b36");
            c.tooltipBase     = QColor("#002b36");
            c.tooltipText     = QColor("#839496");
            c.disabledText    = QColor("#586e75");
            c.gutterBg        = QColor("#073642");
            c.gutterText      = QColor("#586e75");
            c.scrollBg        = QColor("#002b36");
            c.scrollHandle    = QColor("#073642");
            c.scrollHover     = QColor("#586e75");
            c.border          = QColor("#073642");
            break;

        case ColorTheme::SolarizedLight:
            c.window          = QColor("#eee8d5");
            c.windowText      = QColor("#586e75");
            c.base            = QColor("#fdf6e3");
            c.text            = QColor("#657b83");
            c.altBase         = QColor("#eee8d5");
            c.button          = QColor("#e0dac6");
            c.buttonText      = QColor("#586e75");
            c.brightText      = QColor("#073642");
            c.highlight       = QColor("#268bd2");
            c.highlightedText = QColor("#fdf6e3");
            c.tooltipBase     = QColor("#fdf6e3");
            c.tooltipText     = QColor("#657b83");
            c.disabledText    = QColor("#93a1a1");
            c.gutterBg        = QColor("#eee8d5");
            c.gutterText      = QColor("#93a1a1");
            c.scrollBg        = QColor("#fdf6e3");
            c.scrollHandle    = QColor("#d9d2c2");
            c.scrollHover     = QColor("#93a1a1");
            c.border          = QColor("#d9d2c2");
            break;

        case ColorTheme::Nord:
            c.window          = QColor("#2e3440");
            c.windowText      = QColor("#eceff4");
            c.base            = QColor("#2e3440");
            c.text            = QColor("#d8dee9");
            c.altBase         = QColor("#3b4252");
            c.button          = QColor("#3b4252");
            c.buttonText      = QColor("#eceff4");
            c.brightText      = QColor("#ffffff");
            c.highlight       = QColor("#88c0d0");
            c.highlightedText = QColor("#2e3440");
            c.tooltipBase     = QColor("#3b4252");
            c.tooltipText     = QColor("#eceff4");
            c.disabledText    = QColor("#4c566a");
            c.gutterBg        = QColor("#242933");
            c.gutterText      = QColor("#4c566a");
            c.scrollBg        = QColor("#242933");
            c.scrollHandle    = QColor("#3b4252");
            c.scrollHover     = QColor("#4c566a");
            c.border          = QColor("#3b4252");
            break;

        case ColorTheme::Monokai:
            c.window          = QColor("#1e1f1c");
            c.windowText      = QColor("#f8f8f2");
            c.base            = QColor("#272822");
            c.text            = QColor("#f8f8f2");
            c.altBase         = QColor("#3e3d32");
            c.button          = QColor("#3e3d32");
            c.buttonText      = QColor("#f8f8f2");
            c.brightText      = QColor("#ffffff");
            c.highlight       = QColor("#a6e22e");
            c.highlightedText = QColor("#272822");
            c.tooltipBase     = QColor("#1e1f1c");
            c.tooltipText     = QColor("#f8f8f2");
            c.disabledText    = QColor("#75715e");
            c.gutterBg        = QColor("#1e1f1c");
            c.gutterText      = QColor("#75715e");
            c.scrollBg        = QColor("#1e1f1c");
            c.scrollHandle    = QColor("#3e3d32");
            c.scrollHover     = QColor("#75715e");
            c.border          = QColor("#3e3d32");
            break;

        case ColorTheme::OneDark:
            c.window          = QColor("#21252b");
            c.windowText      = QColor("#abb2bf");
            c.base            = QColor("#282c34");
            c.text            = QColor("#abb2bf");
            c.altBase         = QColor("#2c313a");
            c.button          = QColor("#353b45");
            c.buttonText      = QColor("#abb2bf");
            c.brightText      = QColor("#ffffff");
            c.highlight       = QColor("#61afef");
            c.highlightedText = QColor("#282c34");
            c.tooltipBase     = QColor("#21252b");
            c.tooltipText     = QColor("#abb2bf");
            c.disabledText    = QColor("#5c6370");
            c.gutterBg        = QColor("#1e2227");
            c.gutterText      = QColor("#5c6370");
            c.scrollBg        = QColor("#1e2227");
            c.scrollHandle    = QColor("#353b45");
            c.scrollHover     = QColor("#5c6370");
            c.border          = QColor("#353b45");
            break;

        case ColorTheme::GruvboxDark:
            c.window          = QColor("#1d2021");
            c.windowText      = QColor("#ebdbb2");
            c.base            = QColor("#282828");
            c.text            = QColor("#ebdbb2");
            c.altBase         = QColor("#3c3836");
            c.button          = QColor("#3c3836");
            c.buttonText      = QColor("#ebdbb2");
            c.brightText      = QColor("#fbf1c7");
            c.highlight       = QColor("#fe8019");
            c.highlightedText = QColor("#282828");
            c.tooltipBase     = QColor("#1d2021");
            c.tooltipText     = QColor("#ebdbb2");
            c.disabledText    = QColor("#928374");
            c.gutterBg        = QColor("#1d2021");
            c.gutterText      = QColor("#7c6f64");
            c.scrollBg        = QColor("#1d2021");
            c.scrollHandle    = QColor("#3c3836");
            c.scrollHover     = QColor("#504945");
            c.border          = QColor("#3c3836");
            break;

        case ColorTheme::SystemDefault:
        default:
            break;
        }
        return c;
    }
}

void ThemeManager::initialize()
{
    if (!s_initialized && qApp)
    {
        if (qApp->style())
        {
            s_defaultStyleName = qApp->style()->objectName();
        }
        s_defaultPalette = qApp->palette();
        s_initialized = true;
    }
}

const std::vector<ThemeDefinition>& ThemeManager::getThemes()
{
    return s_themes;
}

ThemeDefinition ThemeManager::getThemeDefinition(ColorTheme theme)
{
    for (const auto &def : s_themes)
    {
        if (def.id == theme)
        {
            return def;
        }
    }
    return s_themes[0];
}

bool ThemeManager::isDark(ColorTheme theme)
{
    if (theme == ColorTheme::SystemDefault)
    {
        if (qApp)
        {
            QColor textColor = qApp->palette().color(QPalette::WindowText);
            return (textColor.red() > 128 && textColor.blue() > 128 && textColor.green() > 128);
        }
        return false;
    }
    return getThemeDefinition(theme).isDark;
}

QPalette ThemeManager::createThemePalette(ColorTheme theme)
{
    if (theme == ColorTheme::SystemDefault)
    {
        initialize();
        return s_defaultPalette;
    }

    ThemeColors c = getColorsForTheme(theme);
    QPalette pal;

    // Active
    pal.setColor(QPalette::Window, c.window);
    pal.setColor(QPalette::WindowText, c.windowText);
    pal.setColor(QPalette::Base, c.base);
    pal.setColor(QPalette::AlternateBase, c.altBase);
    pal.setColor(QPalette::Text, c.text);
    pal.setColor(QPalette::Button, c.button);
    pal.setColor(QPalette::ButtonText, c.buttonText);
    pal.setColor(QPalette::BrightText, c.brightText);
    pal.setColor(QPalette::Highlight, c.highlight);
    pal.setColor(QPalette::HighlightedText, c.highlightedText);
    pal.setColor(QPalette::ToolTipBase, c.tooltipBase);
    pal.setColor(QPalette::ToolTipText, c.tooltipText);

    // Inactive
    pal.setColor(QPalette::Inactive, QPalette::Window, c.window);
    pal.setColor(QPalette::Inactive, QPalette::WindowText, c.windowText);
    pal.setColor(QPalette::Inactive, QPalette::Base, c.base);
    pal.setColor(QPalette::Inactive, QPalette::AlternateBase, c.altBase);
    pal.setColor(QPalette::Inactive, QPalette::Text, c.text);
    pal.setColor(QPalette::Inactive, QPalette::Button, c.button);
    pal.setColor(QPalette::Inactive, QPalette::ButtonText, c.buttonText);
    pal.setColor(QPalette::Inactive, QPalette::Highlight, c.highlight);
    pal.setColor(QPalette::Inactive, QPalette::HighlightedText, c.highlightedText);

    // Disabled
    pal.setColor(QPalette::Disabled, QPalette::Window, c.window);
    pal.setColor(QPalette::Disabled, QPalette::WindowText, c.disabledText);
    pal.setColor(QPalette::Disabled, QPalette::Base, c.window);
    pal.setColor(QPalette::Disabled, QPalette::Text, c.disabledText);
    pal.setColor(QPalette::Disabled, QPalette::Button, c.button);
    pal.setColor(QPalette::Disabled, QPalette::ButtonText, c.disabledText);

    return pal;
}

QString ThemeManager::createThemeStyleSheet(ColorTheme theme)
{
    if (theme == ColorTheme::SystemDefault)
    {
        return QString();
    }

    ThemeColors c = getColorsForTheme(theme);

    return QString(
        "QToolTip {"
        "   background-color: %1;"
        "   color: %2;"
        "   border: 1px solid %3;"
        "   padding: 4px;"
        "}"
        "QScrollBar:vertical {"
        "   background: %4;"
        "   width: 14px;"
        "   margin: 0px;"
        "}"
        "QScrollBar::handle:vertical {"
        "   background: %5;"
        "   min-height: 25px;"
        "   border-radius: 4px;"
        "   margin: 2px;"
        "}"
        "QScrollBar::handle:vertical:hover {"
        "   background: %6;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
        "   height: 0px;"
        "}"
        "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
        "   background: none;"
        "}"
        "QScrollBar:horizontal {"
        "   background: %4;"
        "   height: 14px;"
        "   margin: 0px;"
        "}"
        "QScrollBar::handle:horizontal {"
        "   background: %5;"
        "   min-width: 25px;"
        "   border-radius: 4px;"
        "   margin: 2px;"
        "}"
        "QScrollBar::handle:horizontal:hover {"
        "   background: %6;"
        "}"
        "QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {"
        "   width: 0px;"
        "}"
        "QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {"
        "   background: none;"
        "}"
        "QMenuBar {"
        "   background-color: %7;"
        "   color: %8;"
        "}"
        "QMenuBar::item:selected {"
        "   background-color: %9;"
        "}"
        "QMenu {"
        "   background-color: %7;"
        "   color: %8;"
        "   border: 1px solid %3;"
        "}"
        "QMenu::item:selected {"
        "   background-color: %10;"
        "   color: %11;"
        "}"
        "QMenu::separator {"
        "   height: 1px;"
        "   background-color: %3;"
        "   margin: 4px 0px;"
        "}"
        "QToolBar {"
        "   background: %7;"
        "   border-bottom: 1px solid %3;"
        "   spacing: 4px;"
        "   padding: 2px;"
        "}"
        "QStatusBar {"
        "   background: %7;"
        "   color: %8;"
        "   border-top: 1px solid %3;"
        "}"
        "QTabBar::tab {"
        "   background: %9;"
        "   color: %8;"
        "   padding: 6px 12px;"
        "   margin-right: 2px;"
        "   border-top-left-radius: 3px;"
        "   border-top-right-radius: 3px;"
        "}"
        "QTabBar::tab:selected {"
        "   background: %7;"
        "   border-bottom: 2px solid %10;"
        "}"
    )
    .arg(c.tooltipBase.name())
    .arg(c.tooltipText.name())
    .arg(c.border.name())
    .arg(c.scrollBg.name())
    .arg(c.scrollHandle.name())
    .arg(c.scrollHover.name())
    .arg(c.window.name())
    .arg(c.windowText.name())
    .arg(c.altBase.name())
    .arg(c.highlight.name())
    .arg(c.highlightedText.name());
}

void ThemeManager::applyToEditor(ColorTheme theme, PlainTextEdit *editor)
{
    if (!editor)
    {
        return;
    }

    if (theme == ColorTheme::SystemDefault)
    {
        initialize();
        QPalette pal = s_defaultPalette;
        QColor hl = pal.color(QPalette::Active, QPalette::Highlight);
        pal.setColor(QPalette::Inactive, QPalette::Highlight, hl);
        QColor hlt = pal.color(QPalette::Active, QPalette::HighlightedText);
        pal.setColor(QPalette::Inactive, QPalette::HighlightedText, hlt);
        editor->setPalette(pal);
        editor->updateLineNumberArea();
        return;
    }

    ThemeColors c = getColorsForTheme(theme);
    QPalette pal = editor->palette();

    // Editor text area
    pal.setColor(QPalette::Base, c.base);
    pal.setColor(QPalette::Text, c.text);
    pal.setColor(QPalette::Highlight, c.highlight);
    pal.setColor(QPalette::HighlightedText, c.highlightedText);
    pal.setColor(QPalette::Inactive, QPalette::Highlight, c.highlight);
    pal.setColor(QPalette::Inactive, QPalette::HighlightedText, c.highlightedText);

    // Line number area uses Window for background and WindowText for numbers
    pal.setColor(QPalette::Window, c.gutterBg);
    pal.setColor(QPalette::WindowText, c.gutterText);

    editor->setPalette(pal);
    editor->updateLineNumberArea();
}

void ThemeManager::applyTheme(ColorTheme theme, PlainTextEdit *editor)
{
    initialize();

    if (theme == ColorTheme::SystemDefault)
    {
        if (!s_defaultStyleName.isEmpty())
        {
            QApplication::setStyle(QStyleFactory::create(s_defaultStyleName));
        }
        QApplication::setPalette(s_defaultPalette);
        if (qApp)
        {
            qApp->setStyleSheet(QString());
        }
    }
    else
    {
        QApplication::setStyle(QStyleFactory::create("Fusion"));
        QPalette pal = createThemePalette(theme);
        QApplication::setPalette(pal);
        if (qApp)
        {
            qApp->setStyleSheet(createThemeStyleSheet(theme));
        }
    }

    if (editor)
    {
        applyToEditor(theme, editor);
    }
}
