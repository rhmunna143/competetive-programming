#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;

    scanf("%d", &n);

    // looping through the input
    for (int i = 1; i <= n; i++)
    {
        // printing the output
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}