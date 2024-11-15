/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context:
 *
 * 1.
 *
 * Note:
 *
 * Constrains:
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printTree(int N) {
    int width = 2 * N - 1;
    int trunkWidth = N;
    int trunkHeight = N;

    // Print the top part of the tree
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < width; j++) {
            if (j >= N - 1 - i && j <= N - 1 + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Print the trunk of the tree
    for (int i = 0; i < trunkHeight; i++) {
        for (int j = 0; j < width; j++) {
            if (j >= (width - trunkWidth) / 2 && j < (width + trunkWidth) / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printTree(N);

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