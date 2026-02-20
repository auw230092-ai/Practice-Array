#include <stdio.h>
#include <cs50.h>

int main()
{
    int arr[5];

    // Input values
    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Enter number %i: ", i + 1);
    }

    // Assume first element is minimum
    int min = arr[0];

    // Find minimum
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum = %i\n", min);

    return 0;
} 
