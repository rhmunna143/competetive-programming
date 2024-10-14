#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        string s, t;
        cin >> s >> t;

        int len_s = s.length();
        int len_t = t.length();

        // Option 1: Type both sequences directly
        int min_seconds = len_s + len_t;

        // Option 2: Type s, copy to t, and complete t
        min_seconds = min(min_seconds, len_s + 1 + len_t);

        // Option 3: Type t, copy to s, and complete s
        min_seconds = min(min_seconds, len_t + 1 + len_s);

        // Option 4: Use overlap between s and t
        for (int i = 1; i <= min(len_s, len_t); ++i)
        {
            if (s.substr(len_s - i) == t.substr(0, i))
            {
                min_seconds = min(min_seconds, len_s + len_t - i + 1);
            }
        }

        cout << min_seconds << endl;
    }

    return 0;
}