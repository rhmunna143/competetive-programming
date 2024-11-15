/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to print that.
 *
 * 1. start
 * 2. Input will contain only S.
 * 3. Ouput in the format show in the sample output.
 * 4. End
 *
 * Sample Input: thefoxisbrave
 * Sample Output:
    a - 1
    b - 1
    e - 2
    f - 1
    h - 1
    i - 1
    o - 1
    r - 1
    s - 1
    t - 1
    v - 1
    x - 1
 *
 * Note: use frequency array to count the number of times each alphabet appears.
 *
 * Constrains:
 * 1. 1 <= |S| <= 10000; Here |S| means the length of S.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char S[10001];
    scanf("%s", S);

    int freq[26] = {0};

    for (int i = 0; i < strlen(S); i++)
    {
        freq[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
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