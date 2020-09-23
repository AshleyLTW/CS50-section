#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int factorial(int n);
int fibonacci(int n);

int main(void)
{
    string input = get_string("Number: ");

    printf("factorial: %i\n", factorial(atoi(input)));
    printf("fibonacci: %i\n", fibonacci(atoi(input)));
}

// Return n!
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// Return the n-th fibonacci number (0th is 0, 1st is 1 and so on)
int fibonacci(int n)
{
    // TODO
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}