/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given 3 strings each of same length consisting of only small case letters. In one operation you can change a letter to any other letter of one of the strings. You have to find out the minimum number of operations to make all 3 strings same.
 *
 * 1. start
 * 2. input will contain 3 Strings new line separated.
 * 3. output Print an integer, the minimum number of operations to make the strings same.
 * 4. end
 *
 * Note: using recursion (if require) to solve this problem.
 *
 * Constrains:
 * 1. 1 <= Length of each string <= 100
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// function to take input of the strings
void inputStrings(char str1[], char str2[], char str3[], int i)
{
    if (i == 3)
    {
        return;
    }

    if (i == 0)
    {
        scanf("%s", str1);
    }

    if (i == 1)
    {
        scanf("%s", str2);
    }

    if (i == 2)
    {
        scanf("%s", str3);
    }

    inputStrings(str1, str2, str3, i + 1);
}

// Function to find the minimum number of operations to make the strings same
int minOperations(char str1[], char str2[], char str3[], int i)
{
    if (str1[i] == '\0')
    {
        return 0;
    }

    if (str1[i] == str2[i] && str2[i] == str3[i])
    {
        return minOperations(str1, str2, str3, i + 1);
    }

    if (str1[i] == str2[i] && str2[i] != str3[i])
    {
        return 1 + minOperations(str1, str2, str3, i + 1);
    }

    if (str1[i] == str3[i] && str2[i] != str3[i])
    {
        return 1 + minOperations(str1, str2, str3, i + 1);
    }

    if (str2[i] == str3[i] && str1[i] != str3[i])
    {
        return 1 + minOperations(str1, str2, str3, i + 1);
    }

    return 2 + minOperations(str1, str2, str3, i + 1);
}

// function to print the minimum number of operations
void printMinOperations(char str1[], char str2[], char str3[])
{
    printf("%d", minOperations(str1, str2, str3, 0));
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str1[101], str2[101], str3[101];

    inputStrings(str1, str2, str3, 0);

    printMinOperations(str1, str2, str3);

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