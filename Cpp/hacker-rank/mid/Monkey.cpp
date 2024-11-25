/***
 * Context: Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?
 *
 *
 * Constrains: 1 <= |S| <= 10^5
 *
 *
 * Note: input will given by EOF
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input First line will contain a string (line) S.
 * 3. output print the string S in alphabetic order.
 * 4. end
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100000];
    while (cin.getline(str, 100010))
    {
        int str_len = strlen(str);
        int position = 0;

        // Move non-space characters to the beginning of the array
        for (int i = 0; i < str_len; i++)
        {
            if (str[i] != ' ')
            {
                str[position++] = str[i];
            }
        }

        // Null-terminate the array after the last non-space character
        str[position] = '\0';

        // Sort the array up to the null-terminator
        sort(str, str + position);

        // Print the sorted array
        cout << str << endl;
    }

    return 0;
}

/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. [Engg.] in Computer Science and Engineering, [CSE]
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook Profile: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */