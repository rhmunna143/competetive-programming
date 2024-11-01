/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * Input The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.
 * Input The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.
 * 1. The size of the string A and size of the string B separated by a space
 * 2. The string produced by concatenating A and B (A + B).
 * 3. The two strings separated by a single space respectively, after swapping their first character.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declaring the string
    char A[11], B[11];
    scanf("%s %s", A, B);

    // size of the string A and size of the string B separated by a space
    printf("%d %d\n", strlen(A), strlen(B));

    // keep unchanged the original strings here by new variable
    char C[21], D[21];
    strcpy(C, A);
    strcpy(D, B);

    // The string produced by concatenating A and B (A + B)
    printf("%s\n", strcat(A, B));

    // The two strings separated by a single space respectively, after swapping their first character
    char temp = C[0];
    C[0] = D[0];
    D[0] = temp;

    printf("%s %s\n", C, D);

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