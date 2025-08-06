/**
 * @file get_sixers_logo.c
 * 
 * @author Mehmet Mert Gunduz (mmertgunduz@protonmail.com)
 * @brief Draw the Philadelphia 76ers logo and color it by using ANSI color code.
 * 
 * This function is used to construct a colored ASCII representation of Philadelphia 76ers (PHI) team logo.
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

#include <stdbool.h>

#include "../nba_ascii_logos.h"

// Philadelphia 76ers (PHI) logo colors.
#define PHI_BLUE   "\e[38;2;0;107;182m"   // Hex: #006BB6
#define PHI_RED    "\e[38;2;237;23;76m"   // Hex: #ED174C

/**
 * @brief Get the Philadelphia 76ers logo in ASCII format and makes it colorful.
 * 
 * @return char* Philadelphia 76ers (PHI) logo in colored ASCII format.
 */
char *get_sixers_logo() {
    char sixers_logo[] = 
"      # #**  #\n\
     **  ## #**\n\
  ***         #**#\n\
  *            *#\n\
 **#            **#\n\
                 #\n\
 ***           ***\n\
    *         # ##\n\
*  **# *   # ***   *\n\
****:  #** #*#    ***  ************\n\
*****************:********** *******\n\
*****************:*********  ********\n\
*****************:********    ******#\n\
*****************:********     #**#\n\
********* #**** :#****************\n\
        #*****# :#******************\n\
      *******   :********** ********#\n\
     ********   :*********   ********\n\
    ********    :*********   ********\n\
   *********     :********   #*******\n\
  *********      :#*******   ********\n\
 **********       :*******   *******#\n\
***********        :#**************\n\
****    ***           :**********";

    /* The variable for storing and returning the new colorful logo. */
    static char colorful_logo[16000];
    char char_to_add[128];

    /* The variable line counter for setting the blue star.  */
    int n = 0;

    /* The variable for coloring the 7 to red and 6 to blue. */
    bool colon_passed = false;

    /* Length of the colorless logo. */
    int len = strlen(sixers_logo);

    /* Creating the colorful logo. */
    for (int i = 0; i < len; i++) {
        char c[2];
        
        /* Adding \0 at the end of the char to make it a string
         * so we can use strcat with that. */
        c[0] = sixers_logo[i];
        c[1] = '\0';

        if (c[0] == '\n') {
            n++;
            colon_passed = false;
        }
        
        if (n < 9) {
            add_colorful_char(colorful_logo, c, PHI_BLUE);
            continue;
        } 

        if (c[0] == ':') {
            colon_passed = true;
        }

        if (colon_passed == true) {
            add_colorful_char(colorful_logo, c, PHI_BLUE);
        } else {
            add_colorful_char(colorful_logo, c, PHI_RED);
        }
    }

    return colorful_logo;
}