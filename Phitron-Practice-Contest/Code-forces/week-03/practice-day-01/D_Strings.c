/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char stringA[20], stringB[20], concatAB[40]; // Increased size to accommodate edge cases

    // Input stringA and stringB
    fgets(stringA, sizeof(stringA), stdin);
    fgets(stringB, sizeof(stringB), stdin);

    // Remove the newline character from both strings
    stringA[strcspn(stringA, "\n")] = 0;
    stringB[strcspn(stringB, "\n")] = 0;

    // Calculate the lengths of stringA and stringB
    int lenA = strlen(stringA);
    int lenB = strlen(stringB);

    // Output the lengths
    printf("%d %d\n", lenA, lenB);

    // Concatenate stringA and stringB into concatAB
    strcpy(concatAB, stringA);
    strcat(concatAB, stringB);

    // Output the concatenated string
    printf("%s\n", concatAB);

    // Swap the first characters of stringA and stringB (if they exist)
    if (lenA > 0 && lenB > 0)
    {
        char temp = stringA[0];
        stringA[0] = stringB[0];
        stringB[0] = temp;
    }

    // Output stringA and stringB after swapping, separated by a space
    printf("%s %s\n", stringA, stringB);

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