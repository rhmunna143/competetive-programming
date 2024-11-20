/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be 32 bit integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

Palindrome: A palindrome is a word that reads the same forward and backward.
 *
 * 1. start
 * 2. Take input S
 * 3. Define a function is_palindrome() that will receive the string S
 * 4. Check whether the string is a palindrome or not
 * 5. If it is a palindrome, return 1; otherwise, return 0
 * 6. Receive this value in the main function
 * 7. Output print "Palindrome" or "Not Palindrome" without the quotation marks.
 * 8. End
 *
 * Note:
 *
 * Constrains:
 * 1. 1 <= |S| <= 1000; Here |S| means the length of the string.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char S[])
{
    int len = strlen(S);

    for (int i = 0; i < len / 2; i++)
    {
        if (S[i] != S[len - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char S[1000];
    scanf("%s", S);

    if (is_palindrome(S))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
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