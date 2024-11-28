#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string n;
    cin>>n;
    string m=n;
    reverse(m.begin(),m.end());
    if(n==m)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}