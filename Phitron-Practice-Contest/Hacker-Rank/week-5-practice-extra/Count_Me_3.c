/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.
 *
 * 1. start
 * 2. input First line will contain T, the number of test cases.
 * 3. input Each test case will contain only S.
 * 4. Output print the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
 * 5. End
 *
 * Note:
 *
 * Constrains:
 * 1. 1 <= T <= 1000
 * 2. 1 <= |S| <= 10000; Here |S| means the length of S.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char S[10001];
        scanf("%s", S);

        int capital = 0, small = 0, digit = 0;

        for (int i = 0; i < strlen(S); i++)
        {
            if (S[i] >= 'A' && S[i] <= 'Z')
            {
                capital++;
            }
            else if (S[i] >= 'a' && S[i] <= 'z')
            {
                small++;
            }
            else if (S[i] >= '0' && S[i] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}

/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. [Engg.] in Computer Science and Engineering, [CSE]
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook Profile: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */