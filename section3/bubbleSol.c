// Basic solution
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - 1; j++)
    {
        if (values[j] > values[j + 1])
        {
            int temp = values[j];
            values[j] = values[j + 1];
            values[j + 1] = temp;
        }
    }
}

// Optimised
for (int i = 0; i < n - 1; i++)
{
    bool swaps = false;
    for (int j = 0; j < n - 1 - i; j++)
    {
        if (values[j] > values[j + 1])
        {
            swaps = true;
            int temp = values[j];
            values[j] = values[j + 1];
            values[j + 1] = temp;
        }
    }

    if (swaps == false)
        break;
}