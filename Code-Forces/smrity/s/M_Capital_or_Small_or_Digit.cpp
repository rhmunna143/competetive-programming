#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     if (n <= 48 && n >= 57)
//     {
//         cout << "digit" << endl;
//     }
//     else if (n <= 65 && n >= 122)
//     {
//         cout << "ALPHA" << endl;
//         if (n <= 65 && n >= 96)
//         {
//             cout << "IS CAPITAL" << endl;
//         }
//         else
//         {
//             cout << "IS SMALL" << endl;
//         }
//     }
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */

//     return 0;
// }

int main()
{
    char n;
    cin >> n;
    if (n >= '0' && n <='9' )
    {
        cout << "IS DIGIT" << endl;
    }
    else if ((n >= 'A' && n <= 'Z') || (n >='a' && n<='z'))
    {
        cout << "ALPHA" << endl;

        if (n >= 'A' && n <= 'Z')
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    return 0;
}

// int main()
// {
//     // declaring x var
//     char x;

//     // taking input
//     cin >> x;

//     // checking if x is digit
//     if (x >= '0' && x <= '9')
//     {
//         cout << "IS DIGIT" << endl;
//     }

//     // checking if x is alphabet
//     else if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
//     {
//         cout << "ALPHA" << endl;

//         // checking if x is capital
//         if (x >= 'A' && x <= 'Z')
//         {
//             cout << "IS CAPITAL" << endl;
//         }

//         // checking if x is small
//         else
//         {
//             cout << "IS SMALL" << endl;
//         }
//     }
// }