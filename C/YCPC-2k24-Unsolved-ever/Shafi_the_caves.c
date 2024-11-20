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

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Error: Invalid input\n");
        return 1;
    }
    if (n == 0) {
        printf("No caves\n");
        return 0;
    }
    int caves[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &caves[i]);
    }

    int max_cave = caves[0];
    for (int i = 1; i < n; i++) {
        if (caves[i] > max_cave) {
            max_cave = caves[i];
        }
    }

    int greater_than_avg = 0;
    int less_than_avg = 0;
    double sum_caves = 0;
    for (int i = 0; i < n; i++) {
        sum_caves += caves[i];
    }
    double avg_cave = sum_caves / n;

    for (int i = 0; i < n; i++) {
        if (caves[i] > avg_cave) {
            greater_than_avg++;
        } else if (caves[i] < avg_cave) {
            less_than_avg++;
        }
    }

    printf("%d\n", greater_than_avg);
    printf("%d\n", less_than_avg);
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