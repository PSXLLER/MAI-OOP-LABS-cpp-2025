#include <iostream>      
#include "palindrome.h"  

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() 
{
    string verifiable{};
    
    cout << "Enter a string to check for palindrome" << endl;
    cin >> verifiable;

    if (IsWordPalindrome(verifiable)) 
    {
        cout << "The string entered is a palindrome" << endl;
    } 
    else 
    {
        cout << "The string entered is not a palindrome" << endl;
    }
    
    return 0;
}
