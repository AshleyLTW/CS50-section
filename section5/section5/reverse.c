#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Text: ");

    // Loop through string in reverse order
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    printf("\n");
}