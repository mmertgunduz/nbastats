/**
 * @file get_mavericks_logo.c
 * 
 * @author Mehmet Mert Gunduz (mmertgunduz@protonmail.com)
 * @brief Draw the Dallas Mavericks logo and color it by using ANSI color code.
 * 
 * This function is used to construct a colored ASCII representation of Dallas Mavericks (DAL) team logo.
 * It takes characters from a base (colorless) ASCII logo and inserts ANSI color codes before 
 * each character, creating a new string that visually represents the logo with color.
 * 
 * The original string (containing the colorless ASCII art) remains unmodified.
 * Instead, a new dynamically allocated string is created that includes both ANSI escape sequences
 * and the actual characters, effectively painting the logo character-by-character.
 * 
 * This function is typically called by higher-level logo generation functions that analyze
 * each character from the base image and determine the appropriate color before calling this function.
 *
 * @version 0.1
 * @date 2025-08-04
 * 
 * @copyright Copyright (c) 2025 Mehmet Mert Gunduz
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * @see <https://www.gnu.org/licenses/>
 */

#include <stdbool.h>

#include "../nba_ascii_logos.h"

// Dallas Mavericks (SAS) logo colors.
#define DAL_ROYAL_BLUE  "\e[38;2;0;83;188m"   // Hex: #00538C
#define DAL_SILVER      "\e[38;2;187;196;202m"// Hex: #BBC4CA
#define DAL_BLACK       "\e[38;2;6;25;34m"    // Hex: #000000
#define DAL_WHITE       "\e[38;2;255;255;255m" // Hex: #FFFFFF

/**
 * @brief Get the Dallas Mavericks logo in ASCII format and makes it colorful.
 * 
 * @return char* Dallas Mavericks (DAL) logo in colored ASCII format.
 */
char *get_mavericks_logo() {
    char mavericks_logo[] = 
"            -*##*===!---\n\
          -*%.*+@@@@!##%%@@*=:\n\
       :#@%@:. *#@@@@!%*%%##%@#:\n\
      +@**%. . :@=+@%@!@#######@%:\n\
    :@@=##.:.=+*#%==*@@!@@@@@@@@@@=\n\
   =@#-=@. +.@:@@@#@%@@@!@########@+\n\
  :#-=%@#. .@-..%@@@@@%@%!@@%######@=\n\
  +@-+%@@. . :=:@%@@@#@@@!##@@%####@%\n\
  %@-=@@#%.  ...%@@@@@@@@!####@@###%@\n\
  @%=-#%#.: . .:+@@@%@@%#!@%###%@##%@:\n\
 :@%#+=@+..@= .-.@@@@%%%!##@####%@#@@\n\
  #@--@%%#..#....:@@%!#####%#####@#@%\n\
   *@==@:-%= ::+%.#@%@!####%%####%@@:\n\
   :%@--@=. . . .:@@@=!####%%###%@@=\n\
     *@*-#@- .*@@@@@%%!####%##@@@#\n\
      -#@*-*@#-.:*#!@@@@@@@@@@@@=\n\
        :*@@*=+#@@@%%!@@@%##@#-\n\
           :=+%@@%%%%%!@@*=-";

    /* The variable for storing and returning the new colorful logo. */
    static char colorful_logo[16000];
    char char_to_add[128];

    /* The variable for setting blue color after exclamation mark (!). */
    bool exc_mark_passed = false;

    /* Length of the colorless logo. */
    int len = strlen(mavericks_logo);

    /* Creating the colorful logo. */
    for (int i = 0; i < len; i++) {
        char c[2];
        
        /* Adding \0 at the end of the char to make it a string
         * so we can use strcat with that. */
        c[0] = mavericks_logo[i];
        c[1] = '\0';

        if (c[0] == '!') {
            exc_mark_passed = true;
        } else if (c[0] == '\n') {
            exc_mark_passed = false;
        }
        
        if (c[0] == '+' || c[0] == '-' || c[0] == '#') {
            if (exc_mark_passed) {
                add_colorful_char(colorful_logo, c, DAL_ROYAL_BLUE);
            } else {
                add_colorful_char(colorful_logo, c, DAL_WHITE);
            }
        } else if (c[0] == '@') {
            add_colorful_char(colorful_logo, c, DAL_BLACK);
        } else if (c[0] == '.') {
            add_colorful_char(colorful_logo, c, DAL_SILVER);
        } else {
            add_colorful_char(colorful_logo, c, DAL_SILVER);
        }
    }

    return colorful_logo;
}