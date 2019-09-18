// Reverse

// Write a program reverse.c that takes a string as input, and reverses it.

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Text: ");

    Loop through string in reverse order
    for (int i = strlen(s); i >= 0; i--)
    {
        printf("%", s[i]);
    }


    // Alternative method looping forward instead of backward, not recommended!
    // for (int i = 0; i <= strlen(s); i++)
    // {
    //     printf("%c", s[strlen(s) - i]);
    // }

    printf("\n");
}