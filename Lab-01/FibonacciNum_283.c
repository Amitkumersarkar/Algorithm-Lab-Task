#include <stdio.h>

int main()
{
    int N;
    long long x1 = 0, x2 = 1;
    long long nextTerm = x1 + x2;

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    else if (N == 1)
    {
        printf("Fibonacci Series: %lld\n", x1);
        return 0;
    }
    else
    {
        printf("Fibonacci Series: %lld, %lld", x1, x2);

        for (int i = 3; i <= N; ++i)
        {
            printf(", %lld", nextTerm);
            x1 = x2;
            x2 = nextTerm;
            nextTerm = x1 + x2;
        }
        printf("\n");
    }

    return 0;
}