cmake_minimum_required(VERSION 3.10..3.17)

project("DesignPatterns" VERSION 1.0.0)

# Add Design Pattern directorties
add_subdirectory(${PROJECT_SOURCE_DIR}/strategy)

# Add Gtest framework
add_subdirectory(${PROJECT_SOURCE_DIR}/googletest)
