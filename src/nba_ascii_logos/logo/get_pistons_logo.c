/**
 * @file get_pistons_logo.c
 * 
 * @author Mehmet Mert Gunduz (mmertgunduz@protonmail.com)
 * @brief Draw the Detroit Pistons logo and color it by using ANSI color code.
 * 
 * This function is used to construct a colored ASCII representation of Detroit Pistons (DET) team logo.
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

// Detroit Pistons (DET) logo colors.
#define DET_RED    "\e[38;2;200;16;46m"   // Hex: #C8102E
#define DET_BLUE   "\e[38;2;0;47;108m"    // Hex: #002F6C
#define DET_WHITE  "\e[38;2;255;255;255m" // Hex: #FFFFFF

/**
 * @brief Get the Detroit Pistons logo in ASCII format and makes it colorful.
 * 
 * @return char* Detroit Pistons (DET) logo in colored ASCII format.
 */
char *get_pistons_logo() {
    char pistons_logo[] = 
"              --==+*###**===-\n\
          -=*#################*=-\n\
        -######+...::-::...+######--\n\
     -=####+::+*************+::+####=-\n\
    -*###-.*********+++*********.-###*-\n\
   =###+.***=::-+*********+=::=***.+###=\n\
  -###--*::*********************::*--###=\n\
 =###--:=*************************+:--###=\n\
-*##+.-**+...=.:-=..*.:.+.:.*.+..+**-.=##*-\n\
=###.=****:=:-. +*:-* -.=.* +.*=.****=.###=\n\
=###.*****:-.-.-+*:-* *.= = + *=.*****.###+\n\
=##*....***************************....*##+\n\
=###.*****.+ +.*.=**::*.=.* :.=.=*****.###+\n\
=###.=****.-=*.**:-*::* =.* . =*.-***=.###=\n\
-*##=.-***.+**.*-.=*-:*...*.+.=-.=**-.=##*-\n\
 =###--:+*************************+:--###=\n\
  -###--*::*********************::*--###=\n\
   =###+.***=::=+*********+=::=***.+###=\n\
    -*###-.*********+++*********.-###*-\n\
     -=####+::+*************+-.+####=-\n\
       -=######+...:---:...+######=-\n\
          -=*#################*=-\n\
              -==+**###**+==-";

    /* The variable for storing and returning the new colorful logo. */
    static char colorful_logo[32000];
    char char_to_add[128];

    /* Length of the colorless logo. */
    int len = strlen(pistons_logo);

    /* Creating the colorful logo. */
    for (int i = 0; i < len; i++) {
        char c[2];
        
        /* Adding \0 at the end of the char to make it a string
         * so we can use strcat with that. */
        c[0] = pistons_logo[i];
        c[1] = '\0';
        
        if (c[0] == '#') {
            add_colorful_char(colorful_logo, c, DET_BLUE);
        } else if (c[0] == '*') {
            add_colorful_char(colorful_logo, c, DET_RED);
        } else {
            add_colorful_char(colorful_logo, c, DET_WHITE);
        }
    }

    return colorful_logo;
}