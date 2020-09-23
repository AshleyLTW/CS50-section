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