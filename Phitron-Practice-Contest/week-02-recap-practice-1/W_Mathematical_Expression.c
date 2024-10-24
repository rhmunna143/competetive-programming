/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. Start
 * 2. Declare variables firstNumber, secondNumber, result, and operator, and equal sign
 * 3. Read input from user for firstNumber and secondNumber
 * 4. Calculate the result based on the operator
 * 5. Print the result Yes if the result is equal to the given result, otherwise print the actual result
 * 6. End
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int firstNumber, secondNumber, result;
    char operator, equalSign;

    scanf("%d %c %d %c %d", &firstNumber, &operator, & secondNumber, &equalSign, &result);

    if (operator== '+')
    {
        if (firstNumber + secondNumber == result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", firstNumber + secondNumber);
        }
    }
    else if (operator== '-')
    {
        if (firstNumber - secondNumber == result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", firstNumber - secondNumber);
        }
    }
    else if (operator== '*')
    {
        if (firstNumber * secondNumber == result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", firstNumber * secondNumber);
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