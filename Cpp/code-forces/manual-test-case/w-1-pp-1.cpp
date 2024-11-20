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

// Function to get array
int *get_array(int N)
{
    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    int *arr = get_array(N);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
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