#include <gtest/gtest.h>   // подключаем библиотеку GoogleTest
#include "palindrome.h"    // подключаем нашу функцию IsWordPalindrome

// --------------------
// Набор тестов
// --------------------

// Тест 1: пустая строка считается палиндромом
TEST(PalindromeTest, EmptyString) {
    EXPECT_TRUE(IsWordPalindrome(""));
}

// Тест 2: строка из одного символа всегда палиндром
TEST(PalindromeTest, OneChar) {
    EXPECT_TRUE(IsWordPalindrome("u"));
}

// Тест 3: простое слово-палиндром ("level")
TEST(PalindromeTest, SimplePalindrome) {
    EXPECT_TRUE(IsWordPalindrome("level"));
}

// Тест 4: слово, которое не является палиндромом ("benzogang")
TEST(PalindromeTest, NotPalindrome) {
    EXPECT_FALSE(IsWordPalindrome("benzo"));
}


