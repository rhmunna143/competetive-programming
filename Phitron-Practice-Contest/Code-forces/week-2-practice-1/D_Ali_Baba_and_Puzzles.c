#include <stdio.h>
#include <stdbool.h>

// Function to check the arithmetic operator combinations
bool check(long long a, long long b, long long c, long long d)
{
    // Check combinations using +, -, and *
    if (a + b * c == d || a + b - c == d || a - b + c == d || a - b * c == d || a * b + c == d || a * b - c == d)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long long a, b, c, d;

    // Input the four numbers
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Check if any valid combination results in d
    if (check(a, b, c, d))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
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