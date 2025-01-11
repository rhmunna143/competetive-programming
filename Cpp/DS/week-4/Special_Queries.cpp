/***
 * Objective:
 *
 * Context:
 *
 *
 * Constrains:
 *
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int queries;
    cin >> queries;
    while (queries--)
    {
        int value;
        cin >> value;
        if (value == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else if (value == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}