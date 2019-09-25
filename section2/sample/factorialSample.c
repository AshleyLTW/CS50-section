#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void)
{
    string input = get_string("Number: ");
    int n = atoi(input);
    printf("%i\n", factorial(n));
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}