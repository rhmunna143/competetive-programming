/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. input the string S
 * 3. determine how many times does each letter occurred in S
 * 4. constrain: Only one line contains the string S (1 ≤ |S| ≤ 10 to the power 7) where |S| is the length of the string and it consists of only lowercase English letters
 * 5. For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.
 * 6. Note: must print letters in ascending order.
 * 7. end
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // declaring the string
    char S[10000001];
    scanf("%s", S);

    // length of string
    int len = strlen(S);

    // declaring the frequency array
    int F[26] = {0};

    // loop through the string and increment the frequency array element by 1
    for (int i = 0; i < len; i++)
    {
        F[S[i] - 'a']++;
    }

    // print the frequency of all letters in the string S
    for (int i = 0; i < 26; i++)
    {
        if (F[i] > 0)
        {
            printf("%c : %d\n", i + 'a', F[i]);
        }
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