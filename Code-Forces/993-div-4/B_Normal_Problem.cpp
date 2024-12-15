#include <iostream>
#include <string>
#include <algorithm> // for reverse function
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;

        // Step 1: Reverse the string
        reverse(a.begin(), a.end());

        // Step 2: Perform the swaps on the reversed string
        string b = a;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'p' && (i + 1 < a.size() && a[i + 1] == 'q'))
            {
                b[i] = 'q';
                b[i + 1] = 'p';
                i++; // Skip the next character as it has already been swapped
            }
            else if (a[i] == 'q' && (i + 1 < a.size() && a[i + 1] == 'p'))
            {
                b[i] = 'p';
                b[i + 1] = 'q';
                i++; // Skip the next character as it has already been swapped
            }
        }

        // Output the final transformed string
        cout << b << endl;
    }

    return 0;
}
