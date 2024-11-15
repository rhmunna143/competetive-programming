/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. input The first line contains an integer N, the number of games played.
 * 3. input The second line contains N space-separated integers representing the scores in each game.
 * 4. Initialize two variables max and min to the first element of the scores array.
 * 5. Initialize two variables count_max and count_min to 0.
 * 6. Loop through the range of N-1.
 * 7. Check whether the current score is greater than max.
 * 8. If yes, update max to the current score and increment count_max by 1.
 * 9. Check whether the current score is less than min.
 * 10. If yes, update min to the current score and increment count_min by 1.
 * 11. Print count_max and count_min.
 * 12. end
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);

    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &scores[i]);
    }

    int max = scores[0];

    int min = scores[0];

    int count_max = 0;

    int count_min = 0;

    for (int i = 1; i < N; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            count_max++;
        }
        if (scores[i] < min)
        {
            min = scores[i];
            count_min++;
        }
    }

    printf("%d %d\n", count_max, count_min);

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