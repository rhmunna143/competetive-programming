/***
 * Objective:
 *
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
    int t;
    cin >> t;

    while (t--)
    {
        int n, w;
        cin >> n >> w;

        vector<int> weights(n);
        vector<int> values(n);

        for (int i = 0; i < n; i++)
        {
            cin >> weights[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> values[i];
        }

        vector<int> dp(w + 1, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = w; j >= weights[i]; j--)
            {
                dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
            }
        }

        cout << dp[w] << endl;
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