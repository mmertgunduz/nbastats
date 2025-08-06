/**
 * @file get_wizards_logo.c
 * 
 * @author Mehmet Mert Gunduz (mmertgunduz@protonmail.com)
 * @brief Draw the Washington Wizards logo and color it by using ANSI color code.
 * 
 * This function is used to construct a colored ASCII representation of Washington Wizards (WAS) team logo.
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
 * @date 2025-08-06
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

#include "../nba_ascii_logos.h"

// Washington Wizards (WAS) logo colors.
#define WAS_NAVY    "\e[38;2;0;43;92m"    // Hex: #002B5C
#define WAS_RED     "\e[38;2;227;24;55m"  // Hex: #E31837
#define WAS_WHITE   "\e[38;2;255;255;255m"// Hex: #FFFFFF

/**
 * @brief Get the Washington Wizards logo in ASCII format and makes it colorful.
 * 
 * @return char* Washington Wizards (WAS) logo in colored ASCII format.
 */
char *get_wizards_logo() {
    char wizards_logo[] = 
"               --:::...:::--\n\
          --:.....:-===--.....:-=\n\
        -:..:+***=.=*-++.=***+:..:-\n\
      -:.:+****+==:..-..:==+****+:..-\n\
    -:.:***-.:=-.:-=====-:.-=:.-***:.:-\n\
   -..=*=.-%%%%%%%--=-=-:%%%%%%%-.=*=..-\n\
  -..+-.#%%%%%%%%*::...::*%%%%%%%%#.-*..-\n\
 -..:.+%%%%%%%%%*..=%%%+..+%%%%%%%%%+.:..-\n\
 :..:#%%%%%%%%%=.*%%%#%%%*.=%%%%%%%%%%:..:-\n\
-..:#%%%%%%%%+.+%%%%::=%%%%*.+%%%%%%%%#:..-\n\
-. *%%%%%%%%.+%%%%%%.:=%%%%%%+.#%%%%%%%*..-\n\
-.:%%%%%%%-.#%%%%%%#.:=#%%%%%%#:-#%%%%%%:.-\n\
-.:%%%%%%.:%%%%%%%%*.:=#%%%%%%%%-.%%%%%%:.-\n\
-..#%%%*.:%%%%%%%%%+.:-*%%%%%%%%%-.+%%%#..-\n\
 :.-%%*..%%%%%%%%%%=.:=+%%%%%%%%%%..*%%-.:=\n\
 -..*%-.*%%%%%%%%%%-.:=+%%%%%%%%%%*.:%*..-\n\
  -..*..%%%%%%%%%%%:.:==%%%%%%%%%%%..#..-\n\
   -....%%%%%%%%%%#:.:==%%%%%%%%%%%....-\n\
    =:..+%%%%%%%%%#..:==#%%%%%%%%%+..:-\n\
      -:.:*%%%%%%%*..:==#%%%%%%%*:.:-\n\
        -:..:*#%%%+..:-=*%%%#*:..:=\n\
           -::...::..:--::...::-=\n\
               =---::::::---";

    /* The variable for storing and returning the new colorful logo. */
    static char colorful_logo[16000];
    char char_to_add[128];

    /* Length of the colorless logo. */
    int len = strlen(wizards_logo);

    /* Creating the colorful logo. */
    for (int i = 0; i < len; i++) {
        char c[2];
        
        /* Adding \0 at the end of the char to make it a string
         * so we can use strcat with that. */
        c[0] = wizards_logo[i];
        c[1] = '\0';
        
        if (c[0] == '%') {
            add_colorful_char(colorful_logo, c, WAS_NAVY);
        } else if (c[0] == '*') {
            add_colorful_char(colorful_logo, c, WAS_RED);
        } else {
            add_colorful_char(colorful_logo, c, WAS_WHITE);
        }
    }

    return colorful_logo;
}