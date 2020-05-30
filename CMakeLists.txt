cmake_minimum_required (VERSION 3.1)
project (SHAPES)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

add_subdirectory(src)
add_subdirectory(lib/googletest)

add_executable(shapes ${SOURCES} src/ShapesRunner.cpp)
add_executable(shapestest ${SOURCES} test/ShapesTest.cpp)

target_include_directories(shapes PUBLIC include)
target_include_directories(shapestest PUBLIC ${gtest_SOURCE_DIR}/include include)
target_link_libraries(shapestest gtest_main)