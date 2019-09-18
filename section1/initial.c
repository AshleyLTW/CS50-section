// Initials

// Write a program initials.c that takes a user’s full name as input, and outputs their initials.

// The program should accept a user’s name using get_string
// Initials should all be printed as uppercase letters, even if the name contains lowercase letters
// You can assume that the user’s names will be separated by one space

// Refer to initialSample.c to see the example without the hardcoding of the first char

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");


    if (isalpha(name[0]) == 0)
    {
        printf("Alphabetical characters only!\n");
        return 1;
    }

    printf("%c", toupper(name[0]));

    for (int i = 0, len = strlen(name); i < len; i++)
    {
        // check if space
        if (name[i] == ' ')
        {
            if (name[i + 1] != ' ')
            {
                char initial = toupper(name[i + 1]);
                printf("%c", initial);
            }
        }
    }

    // printf("\n");
}