#include <stdio.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int totalMoney;

    // Taking input from user
    scanf("%d", &totalMoney);

    // branching here
    if (totalMoney >= 1000)
    {
        printf("Three Kacchi\n");
    }
    else if (totalMoney >= 500)
    {
        printf("One Large Pizza\n");
    }
    else if (totalMoney >= 250 && totalMoney < 500)
    {
        printf("Three Small Burger\n");
    }
    else if (totalMoney >= 100 && totalMoney < 250)
    {
        printf("Three Fuchka\n");
    }
    else if (totalMoney < 100)
    {
        printf("Nothing\n");
    }
    return 0;
}