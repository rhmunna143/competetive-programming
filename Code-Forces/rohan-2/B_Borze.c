#include <stdio.h>
#include <string.h>

int main()
{
    char input[200];
    scanf("%s", input);

    int length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        if (input[i] == '.')
        {
            printf("0");
        }
        else if (input[i] == '-' && input[i + 1] == '.')
        {
            printf("1");
            i++;
        }
        else if (input[i] == '-' && input[i + 1] == '-')
        {
            printf("2");
            i++;
        }
    }

    return 0;
}