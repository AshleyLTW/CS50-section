// Which one is recursion?

// Option 1!
void count_down_from(n)
{
    if (n == 0)
    {
        return;
    }
    count_down_from(n - 1);
    printf("%i\n", n);
}

// Option 2
void count_down_from(n)
{
    for (int i = n; i > 0; i--)
    {
        printf("%i\n", i);
    }
    return;
}