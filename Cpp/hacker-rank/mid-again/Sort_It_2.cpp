#include <bits/stdc++.h>
using namespace std;

// sort_it() function to take input and sort the array in descending order
int *sort_it(int n)
{
    int *array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n, greater<int>());

    return array;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    int *sorted_array = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << sorted_array[i] << " ";
    }

    return 0;
}