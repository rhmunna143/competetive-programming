/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. start
 * 2. input N
 * 2. input experience of N candidates from next lines (array)
 * 3. for each candidate, check the experience (iterate through the array to check each candidate)
 * 4. if experience is less than 1, print "Entry-level candidate"
 * 5. if experience is between 1 and 3 (inclusive), print "Junior candidate"
 * 6. if experience is between 4 and 7 (inclusive), print "Mid-level candidate"
 * 7. if experience is greater than 7, print "Senior candidate"
 * 8. end
 *
 * Drafts:
 * If experience is less than 1, it's "Entry-level candidate".
 * If experience is between 1 and 3 (inclusive), it's "Junior candidate".
 * If experience is between 4 and 7 (inclusive), it's "Mid-level candidate".
 * If experience is greater than 7, it's "Senior candidate".
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

    int experience[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &experience[i]);
    }

    for (int i = 0; i < N; i++)
    {
        // no candidate should have experience greater than 20 years
        // handling the edge case
        if (experience[i] > 20)
        {
            return 0;
        }

        // for less than 20 years of experience
        if (experience[i] < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (experience[i] >= 1 && experience[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (experience[i] >= 4 && experience[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else
        {
            printf("Senior candidate\n");
        }
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