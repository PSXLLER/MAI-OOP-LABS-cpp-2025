#include <iostream>      // подключаем библиотеку для ввода/вывода (cin, cout)
#include "palindrome.h"  // подключаем заголовок с функцией IsWordPalindrome

// чтобы не писать std:: каждый раз, выбираем конкретные сущности
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // переменная для строки, которую введёт пользователь
    string verifiable{};
    
    // выводим приглашение к вводу
    cout << "Enter a string to check for palindrome" << endl;

    // считываем строку из стандартного ввода (до пробела)
    cin >> verifiable;

    // проверяем, является ли строка палиндромом
    if (IsWordPalindrome(verifiable)) 
    {
        // если да — выводим сообщение
        cout << "The string entered is a palindrome" << endl;
    } 
    else 
    {
        // если нет — другое сообщение
        cout << "The string entered is not a palindrome" << endl;
    }

    // возвращаем 0 — программа завершилась успешно
    return 0;
}
