/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char STRING[1001], reversedSTRING[1001];
    scanf("%s", STRING);

    int length = strlen(STRING);

    // reverse the string
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        reversedSTRING[j] = STRING[i];
    }

    // compare the string and check if it is palindrome or not
    int isPalindrome = 1;

    for (int i = 0; i < length; i++)
    {
        if (STRING[i] != reversedSTRING[i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. Engr. in Computer Science, CSE
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */