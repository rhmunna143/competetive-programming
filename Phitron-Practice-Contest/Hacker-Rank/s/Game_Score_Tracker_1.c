#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    int maximum = a[0];
    int minimum = a[0];

    int maxcnt = 0;
    int mincnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > maximum)
        {
            maximum = a[i];
            maxcnt++;
        }
        if (a[i] < minimum)
        {
            minimum = a[i];
            mincnt++;
        }
    }

    printf("%d %d\n", maxcnt, mincnt);

    return 0;
}