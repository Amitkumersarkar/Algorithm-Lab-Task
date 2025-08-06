#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
    {
        printf("Element %d is not present in the array.\n", key);
    }
    else
    {
        printf("Element %d is present at index %d.\n", key, result);
    }

    key = 25;
    result = binarySearch(arr, 0, n - 1, key);
    if (result == -1)
    {
        printf("Element %d is not present in the array.\n", key);
    }
    else
    {
        printf("Element %d is present at index %d.\n", key, result);
    }

    return 0;
}