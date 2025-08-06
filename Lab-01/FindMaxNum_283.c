// Q-02.Find the Maximum of Two Numbers:
//  Take two numbers as input and print the larger one.
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two number = ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("The max number is num1 = %d\n", num1);
    }
    else if (num2 > num1)
    {
        printf("The max number is num2 = %d\n", num2);
    }
    else
    {
        printf("Both number are equal = %d", num1);
    }
    return 0;
}