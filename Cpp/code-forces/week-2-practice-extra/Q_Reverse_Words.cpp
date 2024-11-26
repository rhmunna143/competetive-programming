#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }

    return 0;
}