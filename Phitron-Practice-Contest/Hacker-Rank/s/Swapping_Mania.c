#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    scanf("%s", &s);
    char t[1000];
    scanf("%s", &t);

    int lenS = strlen(s);
    int lenT = strlen(t);

    int cnts[26] = {0};
    int cntt[26] = {0};

    for (int i = 0; i < lenS; i++)
    {
        cnts[s[i] - 'a']++;
        cntt[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnts[i] != cntt[i])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}