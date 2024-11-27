#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin >> s;

    int i = 0, j = s.size() - 1;
    bool isPalindrome = true;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            isPalindrome = false;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}