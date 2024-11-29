#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // converting decimal to binary
    int count = 0, max = 0;

    while (n > 0) // 13 value of n
    {
        if (n % 2 == 1) // 1
        {
            count++; // counting the number of 1's
            if (count > max) // when the count is greater than max
            {
                max = count; // max is equal to count
            }
        }
        else
        {
            count = 0;
        }

        n = n / 2;
    }

    cout << max << endl;

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
