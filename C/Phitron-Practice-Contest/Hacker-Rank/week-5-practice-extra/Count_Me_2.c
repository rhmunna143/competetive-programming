/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 
 * Context: You will be given a string S as input contains only small English alphabets. You need to tell the number of consonants in it. The string will not contain any spaces.
 * 
 * 1. start
 * 2. Input will contain a string S.
 * 3. Output print the number of consonants.
 * 4. End
 * 
 * Note: Vowels are a,e,i,o and u. The rest are called consonants.
 * 
 * Constrains:
 * 1 <= |S| <= 100000 ; Here |S| means the length of string S.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char S[100001];
    scanf("%s", S);

    int count = 0;
    
    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u')
        {
            count++;
        }
    }

    printf("%d\n", count);

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