#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> books(n);
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }

    int q;
    cin >> q;

    bool flag = true;

    for (int i = 1; i < n; i++)
    {
        if (books[i] < books[i - 1])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        int left = 0, right = n - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (books[mid] == q)
            {
                cout << mid << endl;
                return 0;
            }
            else if (books[mid] < q)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << "-1" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (books[i] == q)
            {
                cout << i << endl;
                return 0;
            }
        }
        cout << "-1" << endl;
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