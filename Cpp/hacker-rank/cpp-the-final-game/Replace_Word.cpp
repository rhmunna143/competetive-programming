#include <bits/stdc++.h>
using namespace std;

// function to replace all occurrences of X in S with "#"
void replace_word(string S, const string X)
{
    string new_string;

    int n = S.length();
    int m = X.length();

    for (int i = 0; i < n; i++)
    {
        bool is_matched = true;

        for (int j = 0; j < m; j++) // checking if X is found into S
        {
            if (i + j >= n || S[i + j] != X[j])
            {
                is_matched = false;
                break;
            }
        }

        if (is_matched)
        {
            new_string += "#";
            i += m - 1;
        }
        else
        {
            new_string += S[i];
        }
    }

    S = new_string; // updating the original string

    cout << S << endl;
}

int main()
{
    int T;
    cin >> T;

    cin.ignore();

    while (T--)
    {
        string S, X;
        char ch;

        cin >> S >> X;

        replace_word(S, X);
    }

    return 0;
}
