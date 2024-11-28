#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;

    string flag = "";
    for (int i = 0; i < n.length(); i++)
    {
        if (i + 4 < n.length() && n[i] == 'E' && n[i + 1] == 'G' && n[i + 2] == 'Y' && n[i + 3] == 'P' && n[i + 4] == 'T')
        {
            flag += " ";
            i += 4; // Skip the next 4 characters
        }
        else
        {
            flag += n[i];
        }
    }

    cout << flag << endl;

    return 0;
}