/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * Context: Alisa and you have gone out for shopping, and Alisa wants to buy a new pair of shoes for Eid. She has enough money to buy anything. However, Alisa will only buy shoes if you also buy a pair. And you will buy a pair of shoes if you can buy a Punjabi. That means, everything is depending on the Punjabi.
 *
 * You have decided that you will buy a Punjabi only if you have more than 1000 Taka. After purchasing the Punjabi the amount of your money will be reduced by 1000. Suppose you have 1600 taka with you, after buying the Punjabi you will have 600 taka left with you.
 *
 * Then you will only buy shoes if you have 500 Taka or more left with you. That means, if you can't buy your Punjabi you can't buy shoes.
 *
 * Now if I inform you the amount N Taka that your mother will give you, can you tell me what will happen next?
 *
 * 1. start
 * 2. Input will contain a non-negative integer N.
 * 3. if N is less than or equal to 1000 then print "Bad luck!".
 * 4. If I have more than 1000 (N > 1000) then print "I will buy Punjabi".
 * 5. if step 3 is true then subtract 1000 from N.
 * 6. If step 3 is true and N is greater than or equal to 500 (after subtraction) then print "I will buy new shoes".
 * 7. if step 3 is true then print "Alisa will buy new shoes".
 * 8. End
 *
 * Note: Don't forget to print new line after every line you print.
 *
 * Constrains:
 * 1. 1 <= N <= 2^31
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

    if (N <= 1000)
    {
        printf("Bad luck!\n");
    }
    else
    {
        printf("I will buy Punjabi\n");
        N -= 1000;
        if (N >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
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