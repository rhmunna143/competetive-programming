#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < 3; i++)
        {
            cnt1 += s[i];
        }

        for (int i = 3; i < 6; i++)
        {
            cnt2 += s[i];
        }

        if (cnt1 == cnt2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}