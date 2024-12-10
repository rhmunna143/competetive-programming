#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }
    vector<int> v2(n);
    for (int i = 0; i < v2.size(); i++)
    {
        cin >> v2[i];
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(v2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back(v1[i]);
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}