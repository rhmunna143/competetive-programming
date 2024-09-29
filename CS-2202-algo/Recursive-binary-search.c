#include <stdio.h>

// Function to perform binary search
int BinarySearch(int A[], int low, int high, int x)
{
    if (low > high)
        return -1; // Element not found

    int mid = low + (high - low) / 2; // Find the middle element

    if (x == A[mid])
        return mid; // Element found
    else if (x < A[mid])
        return BinarySearch(A, low, mid - 1, x); // Search in the left half
    else
        return BinarySearch(A, mid + 1, high, x); // Search in the right half
}

int main()
{
    int n, x, i;

    // Input: size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input: array elements (should be sorted)
    int A[n];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Input: element to search
    printf("Enter the element to search: ");
    scanf("%d", &x);

    // Call the binary search function
    int result = BinarySearch(A, 0, n - 1, x);

    // Output: Result of the search
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
