#pragma once
#include <QString>
#include <QPalette>
#include <vector>

enum class ColorTheme
{
    SystemDefault = 0,
    Dracula = 1,
    SolarizedDark = 2,
    SolarizedLight = 3,
    Nord = 4,
    Monokai = 5,
    OneDark = 6,
    GruvboxDark = 7
};

struct ThemeDefinition
{
    ColorTheme id;
    QString name;
    bool isDark;
};

class PlainTextEdit;

class ThemeManager
{
public:
    static const std::vector<ThemeDefinition>& getThemes();
    static ThemeDefinition getThemeDefinition(ColorTheme theme);
    static bool isDark(ColorTheme theme);
    static void applyTheme(ColorTheme theme, PlainTextEdit *editor = nullptr);
    static QPalette createThemePalette(ColorTheme theme);
    static QString createThemeStyleSheet(ColorTheme theme);
    static void applyToEditor(ColorTheme theme, PlainTextEdit *editor);
    static void initialize();
};
