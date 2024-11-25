#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int is_found = 0;

        // checking all possible cases
        for (int i = 0; i < N - 2 && !is_found; i++)
        {
            for (int j = i + 1; j < N - 1 && !is_found; j++)
            {
                for (int k = j + 1; k < N && !is_found; k++)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        is_found = 1;
                    }
                }
            }
        }

        if (is_found)
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