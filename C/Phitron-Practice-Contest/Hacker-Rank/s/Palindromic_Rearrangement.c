#include <stdio.h>
#include <string.h>

int main()
{
    char string[1001];
    scanf("%s", string);

    int len = strlen(string);

    int flags[26] = {0};

    for (int i = 0; i < len; i++)
    {
        flags[string[i] - 'a']++;
    }

    int oddCount = 0;

    for (int i = 0; i < 26; i++)
    {
        if (flags[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    int minimumOperations;

    if (oddCount > 0)
    {
        minimumOperations = oddCount - 1;
    }
    else
    {
        minimumOperations = 0;
    }

    printf("%d\n", minimumOperations);

    return 0;
}