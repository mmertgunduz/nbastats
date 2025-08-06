cmake_minimum_required(VERSION 3.10)
project(nba_stats C)

# Set standard to C99.
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Source file directories.
include_directories(src)
include_directories(src/nba_ascii_logos)
include_directories(src/nba_ascii_logos/helper)
include_directories(src/nba_ascii_logos/logo)

# Source files of nbastats.
set(SOURCES
    src/main.c
    src/nba_ascii_logos/helper/add_colorful_char.c
    src/nba_ascii_logos/logo/get_spurs_logo.c
    src/nba_ascii_logos/logo/get_mavericks_logo.c
    src/nba_ascii_logos/logo/get_nets_logo.c
    src/nba_ascii_logos/logo/get_boston_logo.c
    src/nba_ascii_logos/logo/get_knicks_logo.c
    src/nba_ascii_logos/logo/get_sixers_logo.c
    src/nba_ascii_logos/logo/get_raptors_logo.c
    src/nba_ascii_logos/logo/get_bulls_logo.c
    src/nba_ascii_logos/logo/get_cavaliers_logo.c
    src/nba_ascii_logos/logo/get_pistons_logo.c
    src/nba_ascii_logos/logo/get_pacers_logo.c
    src/nba_ascii_logos/logo/get_bucks_logo.c
    src/nba_ascii_logos/logo/get_hawks_logo.c
    src/nba_ascii_logos/logo/get_hornets_logo.c
    src/nba_ascii_logos/logo/get_heat_logo.c
    src/nba_ascii_logos/logo/get_magic_logo.c
    src/nba_ascii_logos/logo/get_wizards_logo.c
)

# Add executable
add_executable(nba_stats ${SOURCES})
