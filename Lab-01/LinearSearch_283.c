#include <stdio.h>

int linearSearch(int *arr, int n, int key)
{

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 8, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    int i = linearSearch(arr, n, key);

    if (i == -1)
        printf("Key Not Found");
    else
        printf("Key Found at Index: %d", i);

    return 0;
}