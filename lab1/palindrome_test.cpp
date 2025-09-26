#include <gtest/gtest.h>   
#include "palindrome.h"    

TEST(PalindromeTest, EmptyString) {
    EXPECT_TRUE(IsWordPalindrome(""));
}

TEST(PalindromeTest, OneChar) {
    EXPECT_TRUE(IsWordPalindrome("u"));
}

TEST(PalindromeTest, SimplePalindrome) {
    EXPECT_TRUE(IsWordPalindrome("level"));
}

TEST(PalindromeTest, NotPalindrome) {
    EXPECT_FALSE(IsWordPalindrome("benzo"));
}


