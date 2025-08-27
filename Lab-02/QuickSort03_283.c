#include <stdio.h>

int partitionFor(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l + 1, j;

    for (j = l + 1; j <= h; j++)
    {
        if (A[j] < pivot)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i++;
        }
    }
    A[l] = A[i - 1];
    A[i - 1] = pivot;
    return i - 1;
}

void quickSortDoWhileLoop(int A[], int l, int h)
{
    if (l < h)
    {
        int pi = partitionFor(A, l, h);
        quickSortDoWhileLoop(A, l, pi - 1);
        quickSortDoWhileLoop(A, pi + 1, h);
    }
}
int main()
{
    int A[] = {12, 9, 7, 3, 1, 5};
    int n = sizeof(A) / sizeof(A[0]);
    quickSortDoWhileLoop(A, 0, n - 1);
    printf("Quick Sorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}
