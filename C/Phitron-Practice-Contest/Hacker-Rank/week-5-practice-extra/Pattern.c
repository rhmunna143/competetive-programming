/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a positive integer N, you need to print a pattern shown below using this N.
 * Example:  If N=5, the pattern will look like below.
   #
  ---
 #####
-------
 #####
  ---
   #
 *
 * 1. start
 * 2. Take input N
 * 3. Loop through the range of N
 * 4. Loop through the range of N-i-1 and print " "
 * 5. Loop through the range of 2*i+1 and print "#" or "-" based on the condition
 * 6. Print a new line
 * 7. Loop through the range of N-1 to 0 with decrement of 1
 * 8. Loop through the range of N-i-1 and print " "
 * 9. Loop through the range of 2*i+1 and print "#" or "-" based on the condition
 * 10. Print a new line
 * 11. End
 *
 * Note:
 *
 * Constrains:
 * 1. 1 <= N <= 100
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
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }

    for (int i = N - 1; i > 0; i--)
    {
        for (int j = 0; j < N - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
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