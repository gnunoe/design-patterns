cmake_minimum_required(VERSION 3.10..3.17)

set(LIBRARY_NAME "facade")
set(EXEC_MAIN "${LIBRARY_NAME}_main")
set(EXEC_TEST "${LIBRARY_NAME}_test")

project(${LIBRARY_NAME} VERSION 1.0.0)

# Library compilation
add_library(${LIBRARY_NAME} INTERFACE)
target_include_directories(${LIBRARY_NAME} 
    INTERFACE RECURSE ${PROJECT_SOURCE_DIR}/include
)

# Main
add_executable(${EXEC_MAIN})
target_sources(${EXEC_MAIN} 
    PRIVATE ${PROJECT_SOURCE_DIR}/src/HomeTheatherClient.cpp
)
target_link_libraries(${EXEC_MAIN}
    PRIVATE ${LIBRARY_NAME}
    PRIVATE GTest::gtest_main
)
