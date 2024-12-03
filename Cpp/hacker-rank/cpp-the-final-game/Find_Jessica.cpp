#include <bits/stdc++.h>
using namespace std;

// function for finding the nemo
void finding_the_nemo(string S, string pivot)
{
    int n = S.length();
    int m = pivot.length();

    bool is_found = false;

    // iterating over the string S to find the exact word "Jessica"
    for (int i = 0; i <= n - m; i++)
    {
        bool is_matched = true;

        for (int j = 0; j < m; j++)
        {
            if (S[i + j] != pivot[j])
            {
                is_matched = false;
                break;
            }
        }

        if (is_matched &&
            (i == 0 || S[i - 1] == ' ') &&
            (i + m == n || S[i + m] == ' '))
        {
            is_found = true;
            break;
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

int main()
{
    string S;
    getline(cin, S);

    string pivot = "Jessica";

    finding_the_nemo(S, pivot);

    return 0;
}