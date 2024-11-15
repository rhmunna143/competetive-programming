/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appears in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?
 *
 * 1. start
 * 2. input First line will contain T, the number of test cases.
 * 3. input For each test case, input will contain three positive integers M1, M2 and D.
 * 4. output Output how many fewer days it will take them to complete the work. Don't forget to put a new line after each test case.
 * 5. End
 *
 * Note: If the answer is a floating value, take the integer part of the answer.
 *
 * Constrains:
 * 1. 1 <= T <= 1000
 * 2. 1 <= M1 <= 1000
 * 3. 0 <= M2 <= 1000
 * 4. 1 <= D <= 100
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 

int main()
{
    int T; 
    scanf("%d", &T);

    while (T--)
    {
        int M1, M2, D; // M1: initial farmers, M2: additional farmers, D: original days
        scanf("%d %d %d", &M1, &M2, &D);

        // Calculate the new days required with M1 + M2 farmers
        double newDays = (double)(D * M1) / (M1 + M2);

        // Calculate how many fewer days it takes
        int fewerDays = D - (int)newDays;

        printf("%d\n", fewerDays);
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