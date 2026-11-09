#ifndef COLORS_H
#define COLORS_H

/* Reset */
#define C_RESET          "\033[0m"  // Reset all formatting

/* Standard foreground colors */
#define C_BLACK          "\033[30m" // Black
#define C_RED            "\033[31m" // Red
#define C_GREEN          "\033[32m" // Green
#define C_YELLOW         "\033[33m" // Yellow
#define C_BLUE           "\033[34m" // Blue
#define C_MAGENTA        "\033[35m" // Magenta
#define C_CYAN           "\033[36m" // Cyan
#define C_WHITE          "\033[37m" // White

/* Bright foreground colors */
#define C_BRIGHT_BLACK   "\033[90m" // Bright black (gray)
#define C_BRIGHT_RED     "\033[91m" // Bright red
#define C_BRIGHT_GREEN   "\033[92m" // Bright green
#define C_BRIGHT_YELLOW  "\033[93m" // Bright yellow
#define C_BRIGHT_BLUE    "\033[94m" // Bright blue
#define C_BRIGHT_MAGENTA "\033[95m" // Bright magenta
#define C_BRIGHT_CYAN    "\033[96m" // Bright cyan
#define C_BRIGHT_WHITE  "\033[97m" // Bright white

/* Standard background colors */
#define C_BG_BLACK       "\033[40m" // Black background
#define C_BG_RED         "\033[41m" // Red background
#define C_BG_GREEN       "\033[42m" // Green background
#define C_BG_YELLOW      "\033[43m" // Yellow background
#define C_BG_BLUE        "\033[44m" // Blue background
#define C_BG_MAGENTA     "\033[45m" // Magenta background
#define C_BG_CYAN        "\033[46m" // Cyan background
#define C_BG_WHITE       "\033[47m" // White background

/* Bright background colors */
#define C_BG_BRIGHT_BLACK   "\033[100m" // Bright black background
#define C_BG_BRIGHT_RED     "\033[101m" // Bright red background
#define C_BG_BRIGHT_GREEN   "\033[102m" // Bright green background
#define C_BG_BRIGHT_YELLOW  "\033[103m" // Bright yellow background
#define C_BG_BRIGHT_BLUE    "\033[104m" // Bright blue background
#define C_BG_BRIGHT_MAGENTA "\033[105m" // Bright magenta background
#define C_BG_BRIGHT_CYAN    "\033[106m" // Bright cyan background
#define C_BG_BRIGHT_WHITE   "\033[107m" // Bright white background

/* Text formatting */
#define C_BOLD           "\033[1m" // Bold text
#define C_DIM            "\033[2m" // Dim text
#define C_ITALIC         "\033[3m" // Italic text
#define C_UNDERLINE      "\033[4m" // Underlined text
#define C_BLINK          "\033[5m" // Blinking text
#define C_INVERT         "\033[7m" // Invert foreground/background
#define C_HIDDEN         "\033[8m" // Hidden text
#define C_STRIKE         "\033[9m" // Strikethrough text

/* Formatting controls */
#define C_NO_BOLD_DIM    "\033[22m" // Disable bold and dim
#define C_NO_ITALIC      "\033[23m" // Disable italic
#define C_NO_UNDERLINE   "\033[24m" // Disable underline
#define C_NO_BLINK       "\033[25m" // Disable blinking
#define C_NO_INVERT      "\033[27m" // Disable inversion
#define C_NO_HIDDEN      "\033[28m" // Disable hidden text
#define C_NO_STRIKE      "\033[29m" // Disable strikethrough

/* 256-color foreground colors */
#define C_ORANGE         "\033[38;5;208m" // Orange
#define C_PINK           "\033[38;5;205m" // Pink
#define C_PURPLE         "\033[38;5;135m" // Purple
#define C_GRAY           "\033[38;5;245m" // Gray

/* 256-color background colors */
#define C_BG_ORANGE      "\033[48;5;208m" // Orange background
#define C_BG_PINK        "\033[48;5;205m" // Pink background
#define C_BG_PURPLE      "\033[48;5;135m" // Purple background
#define C_BG_GRAY        "\033[48;5;245m" // Gray background

#endif