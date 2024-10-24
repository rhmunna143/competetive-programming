/***
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 * 1. Declare a var to store the expression
 * 2. Check the expression is true or false
 * 3. If true, print "Right"
 * 4. If false, print "Wrong"
 * 5. End
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Variable Declaration
    int firstNumber, secondNumber;
    char symbol;

    // Input
    scanf("%d %c %d", &firstNumber, &symbol, &secondNumber);

    // check the expression is true or false
    if (symbol == '>') // if the symbol is greater than
    {
        if (firstNumber > secondNumber) // if the first number is greater than the second number
        {
            printf("Right");
        }
        else if (secondNumber > firstNumber) // if the second number is greater than the first number
        {
            printf("Wrong");
        }
        else 
        {
            printf("Wrong");    // if the first number is equal to the second number
        }
    }
    else if (symbol == '<') // if the symbol is less than
    {
        if (firstNumber < secondNumber)     // if the first number is less than the second number
        {
            printf("Right");
        }
        else if (secondNumber < firstNumber)   // if the second number is less than the first number
        {
            printf("Wrong");   // if the first number is greater than the second number
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (symbol == '=') // if the symbol is equal to
    {
        if (firstNumber == secondNumber)   // if the first number is equal to the second number
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
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