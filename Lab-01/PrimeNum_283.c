#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num = 19;
    int count = 0;

    if (num <= 1)
    {
        printf("The number is not prime: %d\n", num);
    }
    else
    {
        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                count++;
            }
        }

        if (count > 2)
        {
            printf("The number is not prime: %d\n", num);
        }
        else
        {
            printf("The number is prime: %d\n", num);
        }
    }

    return 0;
}