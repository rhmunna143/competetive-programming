// Given a string S. Print S after replacing every sub-string that is equal to "EGYPT" with space.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin >> s;

    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            ans += " ";
            i += 4;
        }
        else
            ans += s[i];
    }

    cout << ans << endl;

    return 0;
}