enable_testing()

add_executable(test_day4 test_day4.cpp)
target_include_directories(test_day4 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../day4)
target_link_libraries(test_day4 Foo)
add_test(TEST_DAY4 test_day4)
