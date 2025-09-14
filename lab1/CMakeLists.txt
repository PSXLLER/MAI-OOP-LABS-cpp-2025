# Минимальная версия CMake, с которой будет работать проект
cmake_minimum_required(VERSION 3.22)

# Название проекта (будет отображаться в IDE и cmake-логах)
project(lab1)

# Используем стандарт C++20
set(CMAKE_CXX_STANDARD 20)

# -------------------------
# Основная программа
# -------------------------
# Создаём исполняемый файл "palindrome_app"
# В него включаются исходники palindrome_app.cpp (точка входа main)
# и palindrome.cpp (реализация логики проверки палиндрома)
add_executable(palindrome_app palindrome_app.cpp palindrome.cpp)

# -------------------------
# Подключение GoogleTest
# -------------------------
# Включаем систему тестирования
enable_testing()

# Ищем библиотеку GTest, установленную в системе (libgtest-dev)
find_package(GTest REQUIRED)

# -------------------------
# Тесты
# -------------------------
# Создаём отдельный исполняемый файл "palindrome_test"
# В него включаются:
#   - palindrome_test.cpp (сами тесты)
#   - palindrome.cpp (логика, которую тестируем)
add_executable(palindrome_test palindrome_test.cpp palindrome.cpp)

# Линкуем тесты с библиотеками GoogleTest и pthread (обязателен для GTest)
target_link_libraries(palindrome_test GTest::GTest GTest::Main pthread)

# Регистрируем тест под именем "PalindromeTests"
# Теперь можно запускать его через "ctest" или в IDE
add_test(NAME PalindromeTests COMMAND palindrome_test)
