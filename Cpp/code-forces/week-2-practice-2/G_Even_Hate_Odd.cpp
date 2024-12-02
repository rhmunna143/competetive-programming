#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        int diff = abs(even - odd);

        if (diff % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << diff / 2 << endl;
        }
    }

    return 0;
}