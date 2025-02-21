/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 
 * Context: You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.
 * 
 * 1. start
 * 2. input first line N
 * 3. input N elements in an array A
 * 4. output print number of even values and number of odd values in the array A separated by a space
 * 5. End
 * 
 * Note:
 * 
 * Constrains:
 * 1 <= N <= 1000
 * 0 <= A[i] <= 10^9; Where 0 <= i < N
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even()
{
    int N;
    scanf("%d", &N);

    int A[N];
    int even = 0, odd = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d %d\n", even, odd);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

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