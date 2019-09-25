// Note: This was also not covered in section, this is also untested code so there is a distinct possibility that it doens't work

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
            int min_index = i;
            for (int j = i + 1; j < n; j++)
            {
                if (values[j] < values[min_index])
                {
                    min_index = j;
                }
            }
            int temp = values[i];
            values[i] = values[min_index];
            values[min_index] = temp;
        }

    // Print sorted values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}

