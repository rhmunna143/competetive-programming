/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: 
 *
 * 1. start
 * 2. input The first line contains two integers n, m the dimensions of the grid.
 * 3. input the a[n][m] grid.
 *
 * Note:
 *
 * Constrains:
 * 1. 1 <= n, m <= 1000
 * 2. 1 a[i][j] <= 10^6
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Input the 2D matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int peakCount = 0;
    int peaks[n * m][2]; // To store the positions of the peaks

    // Check for mountain peaks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int isPeak = 1;

            // Check top neighbor
            if (i > 0 && a[i][j] <= a[i - 1][j])
            {
                isPeak = 0;
            }
            // Check bottom neighbor
            if (i < n - 1 && a[i][j] <= a[i + 1][j])
            {
                isPeak = 0;
            }
            // Check left neighbor
            if (j > 0 && a[i][j] <= a[i][j - 1])
            {
                isPeak = 0;
            }
            // Check right neighbor
            if (j < m - 1 && a[i][j] <= a[i][j + 1])
            {
                isPeak = 0;
            }

            if (isPeak)
            {
                peaks[peakCount][0] = i + 1; // Convert to 1-based index
                peaks[peakCount][1] = j + 1; // Convert to 1-based index
                peakCount++;
            }
        }
    }

    // Output the positions of the peaks
    for (int i = 0; i < peakCount; i++)
    {
        printf("%d %d\n", peaks[i][0], peaks[i][1]);
    }

    // Output the number of peaks
    printf("%d\n", peakCount);

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