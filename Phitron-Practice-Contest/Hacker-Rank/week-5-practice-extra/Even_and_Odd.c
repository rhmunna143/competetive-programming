/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.
 *
 * 1. start
 * 2. input first line as integer n
 * 3. input n integers in an array a
 * 4. declare two variables even and odd as 0
 * 5. loop through the array a
 * 6. if a[i] is even then increment even by 1
 * 7. else increment odd by 1
 * 8. print even and odd
 * 9. end
 *
 * Note: using function, dynamic array, and frequency array to solve this problem (using recursion if need depending on the constrains).
 *
 * Constrains:
 * 1 <= n <= 1000
 * 1 <= a[i] <= 10 power 9
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
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
    odd_even();

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