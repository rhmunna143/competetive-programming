#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cars(n);
    for (int i = 0; i < n; i++) {
        cin >> cars[i];
    }

    vector<pair<int, int>> overtakes;
    vector<int> original(n);
    iota(original.begin(), original.end(), 1);  // Create the sequence 1, 2, ..., n

    // Process each car in the final order and move it to its correct position
    for (int i = 0; i < n; i++) {
        int current_car = cars[i];

        // Find where the current car is in the original order
        int pos = find(original.begin(), original.end(), current_car) - original.begin();

        // Swap it into its correct position
        while (pos > i) {
            // Record the overtake (current_car overtakes the car in front of it)
            overtakes.push_back({original[pos], original[pos-1]});
            swap(original[pos], original[pos-1]);
            pos--;
        }
    }

    // Output the results
    cout << overtakes.size() << endl;
    for (const auto& overtake : overtakes) {
        cout << overtake.first << " " << overtake.second << endl;
    }

    return 0;
}
