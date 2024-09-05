#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> polyhedrons;
    polyhedrons["Tetrahedron"] = 4;
    polyhedrons["Cube"] = 6;
    polyhedrons["Octahedron"] = 8;
    polyhedrons["Dodecahedron"] = 12;
    polyhedrons["Icosahedron"] = 20;

    int totalFaces = 0;
    for (int i = 0; i < n; i++) {
        string polyhedron;
        cin >> polyhedron;
        totalFaces += polyhedrons[polyhedron];
    }

    cout << totalFaces << endl;

    return 0;
}