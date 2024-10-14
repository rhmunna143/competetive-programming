#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int calculate_balloons(const string &s)
{
    unordered_set<char> unique_balloons;
    int total_balloons = 0;

    for (char c : s)
    {
        if (unique_balloons.find(c) == unique_balloons.end())
        {
            unique_balloons.insert(c);
            total_balloons += 2; // 2 for the unique balloon
        }
        else
        {
            total_balloons += 1; // 1 for the problem
        }
    }

    return total_balloons;
}

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
        cout << calculate_balloons(s) << endl;
    }
    return 0;
}