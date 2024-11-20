/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Babul had recently visited the National Martyrs' Monument. He was observing the shape of the monument. He saw that the hight increases from one side and then decreases.
 *
 * He got interested with that. He now is playing with numbers, He will take a number N and write the numbers from 1 to N in increasing order and then again to 1 in decreasing order.
 *
 * For example for N = 3 he will write, 1 2 3 2 1.
 *
 * Now you will be given a number N, and you have to print the numbers he will write.
 *
 * 1. start
 * 2. input first line The input will contain an Integer T, the number of test cases.
 * 3. input Each test cases will contain an integer N that is new line separated.
 * 4. output For each case print the numbers that babul will write. For example for N = 3 he will write, 1 2 3 2 1.
 * 5. end
 *
 * Note: solving this problem using recursion.
 *
 * Constrains:
 * 1. 1 <= T <= 10
 * 2. 1 <= N <= 1000
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Function to print the numbers in increasing order
void print(int n)
{
    if (n == 0)
    {
        return;
    }

    print(n - 1);

    printf("%d ", n);
}

// recursive function to print the numbers in decreasing order
void printInDecreasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    printInDecreasingOrder(n - 1);
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        print(N);

        printInDecreasingOrder(N - 1);

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