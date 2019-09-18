// Code that we went over in class

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

    // Demonstration of how bools work
    // bool apple = true;
    // bool pear = false;

    // if (apple && pear)

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