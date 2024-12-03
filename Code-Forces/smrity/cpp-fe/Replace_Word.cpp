#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int n = s.size();
        int m = x.size();

        string result = "";

        for (int i = 0; i < n; i++)
        {
            int flag = 1;

            for (int j = 0; j < m; j++)
            {
                if (i + j >= n || s[i + j] != x[j])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
            {
                result += "#";
                i += m - 1;
            }
            else
            {
                result += s[i];
            }
        }

        cout << result << endl;
    }

    return 0;
}