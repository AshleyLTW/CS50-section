#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    string input = get_string("Number: ");

    printf("factorial: %i\n", factorial(atoi(input)));
    printf("fibonnaci: %i\n", fibonnaci(atoi(input)));
}

// Return n!
int factorial(int n)
{
    // TODO
}

// Return the n-th fibonacci number (0th is 0, 1st is 1 and so on)
int fibonacci(int n)
{
    // TODO
}