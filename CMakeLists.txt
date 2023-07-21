cmake_minimum_required(VERSION 3.10..3.17)

project("DesignPatterns" VERSION 1.0.0)

# Add Design Pattern directorties
add_subdirectory(${PROJECT_SOURCE_DIR}/strategy)
add_subdirectory(${PROJECT_SOURCE_DIR}/observer)
add_subdirectory(${PROJECT_SOURCE_DIR}/decorator)
add_subdirectory(${PROJECT_SOURCE_DIR}/factory)
add_subdirectory(${PROJECT_SOURCE_DIR}/singleton)
add_subdirectory(${PROJECT_SOURCE_DIR}/command)
add_subdirectory(${PROJECT_SOURCE_DIR}/adapter)
add_subdirectory(${PROJECT_SOURCE_DIR}/facade)
add_subdirectory(${PROJECT_SOURCE_DIR}/template_method)

# Add Gtest framework
add_subdirectory(${PROJECT_SOURCE_DIR}/googletest)
