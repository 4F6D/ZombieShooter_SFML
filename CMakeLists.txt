cmake_minimum_required(VERSION 3.16)
project(ZombieShooter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Homebrew SFML 2 Prefix automatisch finden
if (EXISTS "/opt/homebrew/opt/sfml@2")
  list(PREPEND CMAKE_PREFIX_PATH "/opt/homebrew/opt/sfml@2")
elseif (EXISTS "/usr/local/opt/sfml@2")
  list(PREPEND CMAKE_PREFIX_PATH "/usr/local/opt/sfml@2")
endif()

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(ZombieShooter
  src/main.cpp
)

target_include_directories(ZombieShooter PRIVATE header)

target_link_libraries(ZombieShooter PRIVATE sfml-graphics sfml-window sfml-system)
