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
char *get_sixers_logo(); /* Gets Philadelphia 76ers (PHI) in colorful ASCII format. */
char *get_raptors_logo(); /* Gets Toronto Raptors (TOR) in colorful ASCII format. */
char *get_bulls_logo(); /* Gets Chicago Bulls (CHI) in colorful ASCII format. */
char *get_cavaliers_logo(); /* Gets Cleveland Cavaliers (CLE) in colorful ASCII format. */
char *get_pistons_logo(); /* Gets Detroit Pistons (DET) in colorful ASCII format. */
char *get_pacers_logo(); /* Gets Indiana Pacers (IND) in colorful ASCII format. */
char *get_bucks_logo(); /* Gets Milwaukee Bucks (MIL) in colorful ASCII format. */
char *get_hawks_logo(); /* Gets Atlanta Hawks (ATL) in colorful ASCII format. */
char *get_hornets_logo(); /* Gets Charlotte Hornets (CHH) in colorful ASCII format. */
char *get_heat_logo(); /* Gets Miami Heat (MIA) in colorful ASCII format. */
char *get_magic_logo(); /* Gets Orlando Magic (ORL) in colorful ASCII format. */

#endif /* NBA_ASCII_LOGOS_H */