#include <cs50.h>
#include <stdio.h>

int fib(int n);

int main(void)
{
    string input = get_string("Number: ");
    int n = atoi(input);
    printf("%i\n", fib(n));
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}