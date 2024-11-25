#include <bits/stdc++.h>
using namespace std;

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
    int N;
    cin >> N;

    int *sorted_array = sort_it(N);

    // printing the array in ascending order
    for (int i = N - 1; i >= 0; i--)
    {
        cout << sorted_array[i] << " ";
    }

    cout << endl;

    // printing the array in descending order
    for (int i = 0; i < N; i++)
    {
        cout << sorted_array[i] << " ";
    }

    return 0;
}