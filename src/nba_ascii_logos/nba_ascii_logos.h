/** 
 * @file nba_ascii_logos.h
 * 
 * @author Mehmet Mert Gunduz (mmertgunduz@protonmail.com)
 * @brief Manages the NBA logo ascii art printing and coloring system.
 * 
 * @version 0.1
 * @date 2025-08-03
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

#ifndef NBA_ASCII_LOGOS_H
#define NBA_ASCII_LOGOS_H

#include <string.h>

void add_colorful_char(char *buffer, char *char_to_add, char *color); /* Appends sthe ANSI color code string and logo ascii character to the new ascii logo. */

char *get_spurs_logo(); /* Gets San Antonio Spurs (SAS) in colorful ASCII format. */
char *get_mavericks_logo(); /* Gets Dallas Mavericks (DAL) in colorful ASCII format. */
char *get_nets_logo(); /* Gets Brooklyn Nets (NJN) in colorful ASCII format. */
char *get_boston_logo(); /* Gets Boston Celtics (BOS) in colorful ASCII format. */
char *get_knicks_logo(); /* Gets New York Knicks (NYK) in colorful ASCII format. */

#endif /* NBA_ASCII_LOGOS_H */