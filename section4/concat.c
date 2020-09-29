#include <stdbool.h>
#include <stdio.h>

// Write the function concatenate which takes 2 strings and returns a concatenated
// version of those two strings (e.g concatenate("ab", "cd") returns "abcd")

int main(int argc, char *argv[])
{
    char *s1 = get_string("s1: ");
    char *s2 = get_string("s2: ");

    char *s3 = concatenate(s1, s2);
    printf("%s\n", s3);
}

char *concatenate(char *s1, char *s2)
{
    // TODO
}