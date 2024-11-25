#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int ids[3], total_marks[3];
        string names[3];
        char sections[3];

        for (int j = 0; j < 3; j++)
        {
            cin >> ids[j] >> names[j] >> sections[j] >> total_marks[j];
        }

        int maximum_marks = -1;
        int maximum_id_index = -1;

        for (int j = 0; j < 3; j++)
        {
            if (total_marks[j] > maximum_marks)
            {
                maximum_marks = total_marks[j];
                maximum_id_index = j;
            }
            else if (total_marks[j] == maximum_marks)
            {
                if (ids[j] < ids[maximum_id_index])
                {
                    maximum_id_index = j;
                }
            }
        }

        cout << ids[maximum_id_index] << " " << names[maximum_id_index] << " " << sections[maximum_id_index] << " " << total_marks[maximum_id_index] << endl;
    }

    return 0;
}