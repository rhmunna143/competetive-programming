#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
            e++;
        else if (s[i] == 'g' || s[i] == 'G')
            g++;
        else if (s[i] == 'y' || s[i] == 'Y')
            y++;
        else if (s[i] == 'p' || s[i] == 'P')
            p++;
        else if (s[i] == 't' || s[i] == 'T')
            t++;
    }

    int ans = 0;

    while (e >= 1 && g >= 1 && y >= 1 && p >= 1 && t >= 1)
    {
        ans++;
        e--;
        g--;
        y--;
        p--;
        t--;
    }

    cout << ans << endl;

    return 0;
}