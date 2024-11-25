#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100000];
    
    while (cin.getline(str, 100010))
    {
        int str_len = strlen(str);
        int position = 0;

        // moving non-space characters to the beginning of the str
        for (int i = 0; i < str_len; i++)
        {
            if (str[i] != ' ')
            {
                str[position++] = str[i];
            }
        }

        // if null char then-terminate the str after the last non-space char
        str[position] = '\0';

        // sorting the str up to the null-char
        sort(str, str + position);

        // printing the sorted str
        cout << str << endl;
    }

    return 0;
}