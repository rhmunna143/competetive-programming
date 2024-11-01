/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. Input a string S (1 ≤ |S| ≤ 10^4) where |S| is the length of S.
 * 2. Example subsequence The list of all subsequence for the word "apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl", "appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple", "l", "le", "e".
 * 3. Print "YES" if there exists an Subsequence equal to "hello" otherwise, print "NO".
 * 4. End.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declaring the string
    char S[10001];
    scanf("%s", S);

    // length of string
    int len = strlen(S);

    // Example subsequence
    char hello[] = "hello";
    int helloLen = strlen(hello);

    // check if there exists an Subsequence equal to "hello"
    int j = 0;
    
    for (int i = 0; i < len; i++)
    {
        if (S[i] == hello[j])
        {
            j++;
        }
        if (j == helloLen)
        {
            break;
        }
    }

    // print "YES" if there exists an Subsequence equal to "hello" otherwise, print "NO"
    if (j == helloLen)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
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