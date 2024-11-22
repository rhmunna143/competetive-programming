#include <bits/stdc++.h>
using namespace std;

int main()
{
    char line[100000];
    while (cin.getline(line, 100010))
    {
        int n = strlen(line);
        int index = 0;

        for (int i = 0; i < n; i++) {
            if (line[i] != ' ') {
                line[index++] = line[i];
            }
        }

        line[index] = '\0';
        sort(line, line + index);
        cout << line << endl; 
    }

    return 0;
}