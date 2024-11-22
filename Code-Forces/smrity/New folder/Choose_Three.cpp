#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int found = 0;
        for (int i = 0; i < n - 2 && !found; i++)
        {
            for (int j = i + 1; j < n - 1 && !found; j++)
            {
                for (int k = j + 1; k < n && !found; k++)
                {
                    if (a[i] + a[j] + a[k] == s)
                    {
                        found = 1;
                    }
                }
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        delete[] a;
    }

    return 0;
}