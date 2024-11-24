/***
 * Context:
 *
 *
 * Constrains:
 *
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number_of_innings;
    cin >> number_of_innings;

    // results array of size number_of_innings
    char results[number_of_innings];

    // take input of results
    for (int i = 0; i < number_of_innings; i++)
    {
        cin >> results[i];
    }

    // count of Anton and Danik
    int count_of_Anton = 0, count_of_Danik = 0;

    // count the number of Anton and Danik
    for (int i = 0; i < number_of_innings; i++)
    {
        if (results[i] == 'A')
        {
            count_of_Anton++;
        }
        else if (results[i] == 'D')
        {
            count_of_Danik++;
        }
    }

    // check the winner
    if (count_of_Anton > count_of_Danik)
    {
        cout << "Anton" << endl;
    }
    else if (count_of_Anton < count_of_Danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
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