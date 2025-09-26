cmake_minimum_required(VERSION 3.22)

project(lab1)

set(CMAKE_CXX_STANDARD 20)

add_executable(palindrome_app palindrome_app.cpp palindrome.cpp)

enable_testing()

find_package(GTest REQUIRED)

add_executable(palindrome_test palindrome_test.cpp palindrome.cpp)

target_link_libraries(palindrome_test GTest::GTest GTest::Main pthread)

add_test(NAME PalindromeTests COMMAND palindrome_test)
