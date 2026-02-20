#include <stdio.h>
#include <cs50.h>

int main()
{
    int arr[5];
    int positive = 0;
    int negative = 0;

    // Input values
    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Enter number %i: ", i + 1);
    }

    // Count positive and negative numbers
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
    }

    printf("Positive = %i\n", positive);
    printf("Negative = %i\n", negative);

    return 0;
}
