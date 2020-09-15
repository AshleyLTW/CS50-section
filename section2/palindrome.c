// Plaindrome

// Write a program that gets input from a user, print PALINDROME if palindrome,
// print NOT PALINDROME if not palindrome

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Text: ");

    bool palindrome = true;

    // Check characters from start and end
    for (int i = 0, len = strlen(s); i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            palindrome = false;
        }
    }

    // Print output
    if (palindrome)
    {
        printf("PALINDROME\n");
    }
    else
    {
        printf("NOT PALINDROME\n");
    }

}