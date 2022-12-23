cmake_minimum_required(VERSION 3.20)

project(engine VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(${PROJECT_SOURCE_DIR}/lib)

add_executable(engine main.cpp)

target_link_libraries(engine PUBLIC engine_lib)
target_include_directories(engine PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/lib")

# install(TARGETS engine DESTINATION bin)
# install(FILES main.cpp DESTINATION src)

# cmake -S src/ -B cmake/
