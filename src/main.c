/** 
 * @file main.c
 * 
 * @author Mehmet Mert Gunduz (mmertgunduz@protonmail.com)
 * @brief Entry point of the nbastats cli application.
 * 
 * This file contains the main function, which initializes and launches
 * the command-line interface for the nbastats application.
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

#include <stdio.h>

#include "nba_ascii_logos/nba_ascii_logos.h"

/**
 * @brief Entry point of the program.
 * 
 * @param argc Number of command-line arguments passed, including the program name.
 * @param argv Array of strings that store individual arguments.
 * @return int Exit status of the program.
 */
int main(int argc, char *argv[]) {
    printf("%s", get_nuggets_logo());

    return 0;
}