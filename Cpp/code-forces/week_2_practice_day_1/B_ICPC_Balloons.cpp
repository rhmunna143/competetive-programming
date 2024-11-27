#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool solved[26] = {false}; // Array to keep track of solved problems
        int total_balloons = 0;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];

            if (!solved[c - 'A']) // If the problem hasn't been solved before
            {
                solved[c - 'A'] = true; // Mark the problem as solved
                total_balloons += 2;    // 2 balloons for the first time solving this problem
            }
            else
            {
                total_balloons += 1; // 1 balloon for solving a problem already solved before
            }
        }

        cout << total_balloons << endl;
    }

    return 0;
}