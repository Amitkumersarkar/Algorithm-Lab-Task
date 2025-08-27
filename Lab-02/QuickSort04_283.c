#include <stdio.h>

int partitionLast(int A[], int l, int h)
{
    int pivot = A[h];
    int i = l - 1;

    for (int j = l; j < h; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[h];
    A[h] = temp;

    return i + 1;
}

void quickSortLastElement(int A[], int l, int h)
{
    if (l < h)
    {
        int pi = partitionLast(A, l, h);
        quickSortLastElement(A, l, pi - 1);
        quickSortLastElement(A, pi + 1, h);
    }
}

int main()
{
    int A[] = {12, 9, 7, 3, 1, 5};
    int n = sizeof(A) / sizeof(A[0]);
    quickSortLastElement(A, 0, n - 1);
    printf("Quick Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
