/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 
 * Context: You love binary number 0 and 1. Now,You are given a binary string S of size N. Now you need to count the total occurrences of 0 and 1.
 * 
 * 1. Start
 * 2. Input The first line contains a positive integer N
 * 3. Input The second line contains a string S, consisting only 0 and 1.
 * 4. First print the total occurrences of 0, then give a space, and print the total occurrences of 1.
 * 5. End
 * 
 * Note:
 * 
 * Constrains:
 * 1. 1 <= N <= 10
 * 2. Si contains 0 or 1 ; Where 1 <= i <= N
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Declaring variables
    int N, i, count0 = 0, count1 = 0;
    char S[11];

    // Input
    scanf("%d", &N);
    scanf("%s", S);

    // Counting the total occurrences of 0 and 1
    for (i = 0; i < N; i++)
    {
        if (S[i] == '0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }

    // Output
    printf("%d %d", count0, count1);
    
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