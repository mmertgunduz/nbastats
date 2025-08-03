/**
 * @file add_colorful_char.c
 * 
 * @author Mehmet Mert Gunduz (mmertgunduz@protonmail.com)
 * @brief Append an ANSI color code string and string made char (a char with a \0 at the end) to the specified string. 
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

#include "../nba_ascii_logos.h"

/**
 * @brief Append an ANSI color code and string made char to the specified string.
 * 
 * @param buffer New colorful logo string variable.
 * @param char_to_add The character with \0 at the end of it.
 * @param color The ANSI color code string to prepend to the char. 
 */
void add_colorful_char(char *buffer, char *char_to_add, char *color) {
    char color_and_char[128];
    
    strcpy(color_and_char, color);

    strcat(color_and_char, char_to_add);

    /* Add the color and char string to colorful ascii art logo buffer. */
    strcat(buffer, color_and_char);
}