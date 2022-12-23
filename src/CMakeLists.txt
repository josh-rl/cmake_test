file(GLOB Sources "*.cpp")
add_executable(${PROJECT_NAME} ${Sources})
target_link_libraries(${PROJECT_NAME} engine_lib)
