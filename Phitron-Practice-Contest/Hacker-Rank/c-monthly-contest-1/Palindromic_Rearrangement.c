/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You are given a string S consisting of only small letters alphabet. The task is to make the string Palindrome by doing some specific tasks.

In one operation you can delete a character from the string and rearrange the letter of the string however you want.

Your task is to find out the minimum number of operations needed to make this string palindrome. It is guaranteed that you can always make the string Palindrome by doing a finite number of operations.

 *
 * 1. start
 * 2. input First line contains string S
 * 3. output Print a single integer , minimum number of operations.
 * 4. end
 *
 * Note: A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.
 *
 * Constrains: 1<= |S| <= 1000
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char S[1001];
    scanf("%s", S);

    int len = strlen(S);

    int count[26] = {0};

    // Count frequency of each character
    for (int i = 0; i < len; i++)
    {
        count[S[i] - 'a']++;
    }

    int odd = 0;

    // Count the number of characters with odd frequency
    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 != 0)
        {
            odd++;
        }
    }

    // Minimum number of deletions needed
    int min_operations = (odd > 0) ? odd - 1 : 0;

    printf("%d\n", min_operations);

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