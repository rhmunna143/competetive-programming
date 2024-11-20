/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a positive integer N, you need to print a pattern shown below using this N.
For example: If N=4, the pattern will look like below.
   1
  21
 321
4321
 *
 * 1. start
 * 2. Take input N
 * 3. Loop through the range of N
 * 4. Loop through the range of N-i-1 and print " "
 * 5. Loop through the range of i+1 and print i+1
 * 6. Print a new line
 * 7. End
 *
 * Note:
 *
 * Constrains:
 * 1. 1 <= N <= 9
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d", i - j + 1);
        }
        printf("\n");
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