#include "palindrome.h"  

bool IsWordPalindrome(const std::string& word) 
{
    if (word.empty()) 
    {
        return true;
    }

    size_t left = 0;
    size_t right = word.size() - 1;

    while (left < right) 
    {
        if (word[left] != word[right]) 
        {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}
