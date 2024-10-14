#include <stdio.h>
#include <string.h>

// Function to calculate the maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Function to calculate maximum overlap between end of str1 and start of str2
int calculate_overlap(const char *str1, const char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int max_overlap = 0;

    // Check the maximum overlap
    for (int i = 1; i <= len1 && i <= len2; ++i)
    {
        if (strncmp(str1 + len1 - i, str2, i) == 0)
        {
            max_overlap = i;
        }
    }
    return max_overlap;
}

int main()
{
    int q;
    scanf("%d", &q); // Number of test cases

    while (q--)
    {
        char s[101], t[101];
        scanf("%s %s", s, t);

        int len_s = strlen(s);
        int len_t = strlen(t);

        // Option 1: Type both strings fully
        int min_seconds = len_s + len_t;

        // Calculate overlaps
        int overlap_st = calculate_overlap(s, t);
        int overlap_ts = calculate_overlap(t, s);

        // Calculate minimum seconds considering overlaps
        min_seconds = min(min_seconds, len_s + len_t - max(overlap_st, overlap_ts) + 1);

        // Output the minimum seconds
        printf("%d\n", min_seconds);
    }

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