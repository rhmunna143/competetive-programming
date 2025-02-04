#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Heapify(int A[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1; // Correct left child index for 0-based array
    int r = 2 * i + 2; // Correct right child index for 0-based array

    // If left child exists and is larger than root
    if (l <= n && A[l] > A[largest])
        largest = l;

    // If right child exists and is larger than root
    if (r <= n && A[r] > A[largest])
        largest = r;

    // If largest is not root, swap and continue heapifying
    if (largest != i)
    {
        swap(&A[i], &A[largest]);
        Heapify(A, n, largest);
    }
}

void buildHeap(int A[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        Heapify(A, n, i);
    }
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int A[n]; // Create an array of size n

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Original array: \n");
    printArray(A, n);

    // Build the heap
    buildHeap(A, n);

    printf("Array after heap structure: \n");
    printArray(A, n);

    return 0;
}
