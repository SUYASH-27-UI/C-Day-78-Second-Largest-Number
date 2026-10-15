#include <stdio.h>

int main()
{
    int n, number;
    int largest, second_largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Please enter at least 2 numbers.");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (i == 1)
        {
            largest = number;
            second_largest = number;
        }
        else if (number > largest)
        {
            second_largest = largest;
            largest = number;
        }
        else if (number < largest &&
                 (second_largest == largest || number > second_largest))
        {
            second_largest = number;
        }
    }

    if (largest == second_largest)
    {
        printf("No second largest distinct number.");
    }
    else
    {
        printf("Second largest number = %d", second_largest);
    }

    return 0;
}
