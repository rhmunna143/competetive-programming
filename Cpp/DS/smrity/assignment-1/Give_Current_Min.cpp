#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, query;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    cin >> query;
    while (query--)
    {
        int command;
        cin >> command;
        if (command == 1)
        {
            if (mp.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << mp.begin()->first << endl;
            }
        }
        else if (command == 2)
        {
            if (mp.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                auto it = mp.begin();
                int min_val = it->first;
                if (--mp[min_val] == 0)
                {
                    mp.erase(min_val);
                }
                if (mp.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << mp.begin()->first << endl;
                }
            }
        }
        else
        {
            int x;
            cin >> x;
            mp[x]++;
            cout << mp.begin()->first << endl;
        }
    }
    return 0;
}