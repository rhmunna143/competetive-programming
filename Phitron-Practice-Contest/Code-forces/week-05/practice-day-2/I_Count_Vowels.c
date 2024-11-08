/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Given a string S. Print number of vowels in the string.
 *
 * 1. start
 * 2. input Only one line containing a string S. where |S| is the length of the string and it consists only of capital ,small letters and spaces.
 * 3. output Print the number of vowels in the string S.
 * 4. end
 *
 * Note:
 * 1. Use a function to check if a letter is a vowel
 * 2. Vowel letters: ['a', 'e', 'i', 'o', 'u'].
 * 3. Vowel letters could be capital or small.
 * 4. Solve this problem using recursion.
 *
 * Constrains:
 * 1. 1 <= |S| <= 200
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// function to check if a letter is a vowel
int isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') // checking if the letter is a vowel
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// function to count the number of vowels in the string
int countVowels(char S[], int i)
{
    if (S[i] == '\0') // base case when the end of the string is reached
    {
        return 0; // return 0
    }

    int count = countVowels(S, i + 1); // recursive case

    if (isVowel(S[i])) // if the letter is a vowel
    {
        return count + 1; // return the count of vowels
    }
    else
    {
        return count; // return the count of vowels
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char S[201]; // declaring a string S of size 200

    scanf("%[^\n]s", S); // input the string S where |S| is the length of the string and it consists only of capital, small letters and spaces

    printf("%d", countVowels(S, 0)); // output the number of vowels in the string S

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