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
)

# Add executable
add_executable(nba_stats ${SOURCES})
