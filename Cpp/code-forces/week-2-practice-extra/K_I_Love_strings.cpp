#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string S, T;
        cin >> S >> T;

        string result = "";
        
        for (int i = 0; i < S.size() || i < T.size(); i++)
        {
            if (i < S.size())
                result += S[i];
            if (i < T.size())
                result += T[i];
        }

        cout << result << endl;
    }

    return 0;
}