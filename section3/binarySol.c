bool search(int value, int values[], int start, int end)
{
    // if the "end" comes before the "start" then the element can't be in the array
    if (end < start)
    {
        return false;
    }

    // Calculate the midpoint of the current array
    int midpoint = (start + end) / 2;

    // if we found what we're looking for in the middle, return true
    if (value == values[midpoint])
    {
        return true;
    }

    // If the element at the midpoint is too large, repeat with the left half of the array
    else if (value < values[midpoint])
    {
        return search(value, values, start, midpoint - 1);
    }

    // Otherwise, repeat with the right half of the array
    else
    {
        return search(value, values, midpoint + 1, end);
    }
}