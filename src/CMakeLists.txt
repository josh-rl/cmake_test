cmake_minimum_required(VERSION 3.20)

project(engine VERSION 0.1)

# include(CTest)
# enable_testing()

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(engine_config.hpp.in engine_config.hpp)

add_executable(engine main.cpp)

target_include_directories(engine PUBLIC "${PROJECT_BINARY_DIR}")

# cmake -S src/ -B cmake/
