// Q-01:  Input an integer and check whether it is even or odd.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the value =");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}
