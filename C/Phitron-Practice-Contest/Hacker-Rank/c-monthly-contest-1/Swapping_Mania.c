/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You are given two strings S and T consisting of only small letters. In one operation , you can pick any two characters of string S and swap their places. Your task is to determine if it is possible to make S and T equal after a finite number of operations ( possibly zero).
 *
 * 1. start
 * 2. input First line contains string S
 * 3. input Second line contains string T
 * 4. Loop through the range of length of S
 * 5. Check whether the characters of S and T are equal or not
 * 6. If not equal, check whether the characters of S and T are equal or not
 * 7. If not equal, print "NO"
 * 8. If equal, print "YES"
 * 9. End
 *
 * Note:
 *
 * Constrains: 1<= |S|, |T| <= 1000
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char S[1001], T[1001];
    scanf("%s", S);
    scanf("%s", T);

    int lenS = strlen(S);
    int lenT = strlen(T);

    // If lengths are not equal, it's not possible
    if (lenS != lenT)
    {
        printf("NO\n");
        return 0;
    }

    // Count frequency of each character in S and T
    int countS[26] = {0};
    int countT[26] = {0};

    for (int i = 0; i < lenS; i++)
    {
        countS[S[i] - 'a']++;
        countT[T[i] - 'a']++;
    }

    // Compare character frequencies
    for (int i = 0; i < 26; i++)
    {
        if (countS[i] != countT[i])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
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