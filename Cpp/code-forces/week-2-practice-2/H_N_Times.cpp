#include <bits/stdc++.h>
using namespace std;

// recursive func to print the char c, n times
void print_char(char c, int n)
{
    if (n == 0)
        // cout << endl; // this line is not needed
        return;
    else if (n == 1)
        cout << c << endl;
    else
    {
        cout << c << " ";
        print_char(c, n - 1);
    }

    return;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        print_char(c, n);
    }

    return 0;
}