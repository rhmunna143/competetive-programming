#include<stdio.h>

int main()
{
    // Declaring variables
    int salamiOfAbul, salamiOfBabul, salamiOfBablu, totalSalami;

    // Taking input
    scanf("%d %d %d", &salamiOfAbul, &salamiOfBabul, &salamiOfBablu);

    // Calculating total salami
    totalSalami = salamiOfAbul + salamiOfBabul + salamiOfBablu;

    // Printing total salami
    printf("%d\n", totalSalami);
    
    return 0;
}