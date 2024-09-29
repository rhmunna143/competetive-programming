#include <stdio.h>

// Function to swap two integers
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to perform selection sort
void selectionSort(int a[], int n)
{
    int i, j, min;

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        // Find the minimum element in the unsorted part of the array
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (min != i)
        {
            swap(&a[i], &a[min]);
        }
    }
}

// Function to print the array
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    // Input the elements
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Perform selection sort
    selectionSort(a, n);

    // Print the sorted array
    printf("Sorted array: ");
    printArray(a, n);

    return 0;
}
