/***
 * Objective:
 *
 * Context: You will be given a list A of size N. Then you will be given Q queries, for each query there will be some commands. Commands are given below -

 1. ) X -> Insert X into the list. Then print the current minimum value from the list.
 2. 1 -> Print the current minimum value from the list.
 3. 2 -> Delete the current minimum value from the list and print the minimum value from the list after deletion.
 *
 *
 * Constrains:
 * 1. 1 <= N + Q <= 10^5
 * 2. -10^9 <= A[i] <= 10^9 here i <= 0 <= N here Ai means the value of the list A
 * 3. -10^9 <= X <= 10^9
 *
 * Note: If the list is empty and you can't print anything then you should print "Empty".
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input First line will contain N
 * 3. Second line will contain the list A of size N
 * 4. Third line will contain Q
 * 5. Next Q lines will contain the queries (Commands)
 * 6. output For each command, print as asked from the list
 * 7. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N;

    map<int, int> freq;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    cin >> Q;

    while (Q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 1)
        {
            if (freq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << freq.begin()->first << endl;
            }
        }
        else if (cmd == 2)
        {
            if (freq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                auto it = freq.begin();
                int minValue = it->first;

                if (--freq[minValue] == 0)
                {
                    freq.erase(minValue);
                }

                if (freq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << freq.begin()->first << endl;
                }
            }
        }
        else
        {
            int x;
            cin >> x;
            freq[x]++;
            cout << freq.begin()->first << endl;
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