#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int queries;
    cin >> queries;
    while (queries--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (!st.empty() && ((c == '1' && st.top() == '0') || (c == '0' && st.top() == '1')))
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}