/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You are given two number n and d.You need to say n! is divided by d or not.
 *
 * 1. Start
 * 2. Input The first line of the input contains one integer t (1≤t≤100) — the number of test cases
 * 3. Input An integer n (1 ≤ n ≤ 10^5):
 * 4. Input An integer d (1 ≤ d < 10^5)
 * 5. Output YES, if n! is divided by d or NO, otherwise.
 * 6. End
 *
 * Note:
 *
 * Constrains:
 * 1. 1 ≤ t ≤ 100
 * 2. 1 ≤ n ≤ 10^5
 * 3. 1 ≤ d < 10^5
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Declaring variables
    int t, n, d, i, j, count, max, min, a[200001];

    // Input
    scanf("%d", &t);

    // Loop for test cases
    while (t--)
    {
        // Input
        scanf("%d %d", &n, &d);

        // Counting the total occurrences of 0 and 1
        count = 0;

        for (i = 1; i <= n; i++)
        {
            count += i;
        }

        // Output
        if (count % d == 0)
        {
            printf("YES\n");
        }
        
        if (count % d != 0)
        {
            printf("NO\n");
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