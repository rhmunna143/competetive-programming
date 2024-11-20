/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given the multiplication of four numbers and three of those numbers, find the missing number.
 *
 * 1. start
 * 2. input the first line contain T, number of test cases.
 * 3. input second line For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers) space separated.
 * 4. output Print the missing number for each test case in a new line separated.
 * 5. end
 *
 * Note:
 * 1. If the missing number could not be found for the given input, print -1
 * 2. All numbers are non-negative integers.
 * 3. solve this problem using recursion where necessary.
 * 4. using functions to solve this problem.
 *
 * Constrains:
 * 1. 1 <= T <= 100000
 * 2. 0 <= M <= 10^18
 * 3. 1 <= A, B, C <= 10^6
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Function to input the number of test cases
void inputTestCases(int *T)
{
    scanf("%d", T);
}

// Function to input the numbers
void inputNumbers(long long *M, long long *A, long long *B, long long *C)
{
    scanf("%lld %lld %lld %lld", M, A, B, C);
}

// Function to find the missing number
long long findMissingNumber(long long M, long long A, long long B, long long C)
{
    long long product = A * B * C;
    if (product == 0)
    {
        return (M == 0) ? 0 : -1;
    }
    if (M % product != 0)
    {
        return -1;
    }
    return M / product;
}

// Function to print the missing number
void printMissingNumber(long long missingNumber)
{
    printf("%lld\n", missingNumber);
}

// Function to solve the test case
void solveTestCase(int T)
{
    if (T == 0)
    {
        return;
    }

    long long M, A, B, C;
    inputNumbers(&M, &A, &B, &C);

    long long missingNumber = findMissingNumber(M, A, B, C);

    printMissingNumber(missingNumber);

    solveTestCase(T - 1);
}

int main()
{
    int T;

    inputTestCases(&T);

    solveTestCase(T);

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