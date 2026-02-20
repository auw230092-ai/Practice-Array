#include <stdio.h>
#include <cs50.h>

int main()
{
    int arr[5];
    int sum = 0;

    // Input values
    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Enter number %i: ", i + 1);
    }

    // Calculate sum
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    // Calculate average
    float average = sum / 5.0;

    // Print results
    printf("Total Sum = %i\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
