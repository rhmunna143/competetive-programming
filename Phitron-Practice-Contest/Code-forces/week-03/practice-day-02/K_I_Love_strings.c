/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. The first letter of the string S followed by the first letter of the string T.
 * 2. the second letter of the string S followed by the second letter of the string T.
 * 3. and so on...
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declaring the test case
    int N;
    scanf("%d", &N);

    // declaring the string
    char S[51], T[51];

    // loop for N test cases
    while (N--)
    {
        // input the string
        scanf("%s %s", S, T);

        // length of string
        int lenS = strlen(S);
        int lenT = strlen(T);
        int minLen = lenS < lenT ? lenS : lenT;

        // Interleave characters from both strings
        for (int i = 0; i < minLen; i++)
        {
            printf("%c%c", S[i], T[i]);
        }

        // Append remaining characters from the longer string
        if (lenS > lenT)
        {
            printf("%s", S + minLen);
        }
        else if (lenT > lenS)
        {
            printf("%s", T + minLen);
        }

        printf("\n");
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