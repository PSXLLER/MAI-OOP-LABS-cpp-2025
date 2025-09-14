#pragma once               // защита от повторного включения файла (аналог include guard)
#include <string>          // подключаем стандартный класс std::string

// Объявление функции IsWordPalindrome
// Принимает: строку (std::string) по константной ссылке
// Возвращает: true, если строка является палиндромом, иначе false
bool IsWordPalindrome(const std::string& word);
