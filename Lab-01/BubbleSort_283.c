#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        for (int i = 0; i < size - step - 1; ++i)
        {

            if (arr[i] > arr[i + 1])
            {

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {7, 1, 3, 2, 8};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original Array: \n");
    printArray(data, size);

    bubbleSort(data, size);

    printf("Sorted Array in Ascending Order: \n");
    printArray(data, size);

    return 0;
}