// Note: We did not cover this in section, this is just for some extra reading if you're interested.
// I also haven't tested this code, so it's probably right? But there is definitely a chance that it doesn't.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input
    int n = get_int("How many values? ");
    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }

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
        }

    if (swaps == false)
        break;
}

    // Print sorted values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}