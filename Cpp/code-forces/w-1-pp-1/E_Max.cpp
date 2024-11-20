/***
 * Context:
 *
 *
 * Constrains:
 *
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;

    cin >> N;

    // Declare an array of size N. dynamic memory allocation for array
    int *ARRAY = new int[N];

    // Read N integers from STDIN and store them in the array
    for (int i = 0; i < N; i++)
    {
        cin >> ARRAY[i];
    }

    // Max number in the array
    int max = ARRAY[0];

    for (int i = 1; i < N; i++)
    {
        if (ARRAY[i] > max)
        {
            max = ARRAY[i];
        }
    }

    // Print the max number in the array
    cout << max << endl;

    // Free the memory allocated for the array
    delete[] ARRAY;

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