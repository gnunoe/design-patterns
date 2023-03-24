cmake_minimum_required(VERSION 3.10..3.17)

set(LIBRARY_NAME "decorator")
set(EXEC_MAIN "${LIBRARY_NAME}_main")
set(EXEC_TEST "${LIBRARY_NAME}_test")


project(${LIBRARY_NAME} VERSION 1.0.0)

# Library compilation
add_library(${LIBRARY_NAME} STATIC)
target_include_directories(${LIBRARY_NAME} 
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)
target_sources(${LIBRARY_NAME} 
    PRIVATE ${PROJECT_SOURCE_DIR}/src/Coffee.cpp
    PRIVATE ${PROJECT_SOURCE_DIR}/src/Tea.cpp
    PRIVATE ${PROJECT_SOURCE_DIR}/src/CondimentDecorator.cpp
    PRIVATE ${PROJECT_SOURCE_DIR}/src/Milk.cpp
    PRIVATE ${PROJECT_SOURCE_DIR}/src/Mocha.cpp
)

# Test
add_executable(${EXEC_TEST})
target_sources(${EXEC_TEST} 
    PRIVATE ${PROJECT_SOURCE_DIR}/test/main.cpp
    PRIVATE ${PROJECT_SOURCE_DIR}/test/test_Beverage.cpp
    PRIVATE ${PROJECT_SOURCE_DIR}/test/test_CondimentDecorator.cpp
)
target_link_libraries(${EXEC_TEST}
    PRIVATE ${LIBRARY_NAME}
    PRIVATE GTest::gtest_main
)