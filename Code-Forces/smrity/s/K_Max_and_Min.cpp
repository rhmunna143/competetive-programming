#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a ,min (b, c)) << " " << max(a, max(b, c)) << endl;
    return 0;
}