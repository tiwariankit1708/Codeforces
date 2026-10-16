#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> grid(3);
    for (int i = 0; i < 3; ++i) {
        cin >> grid[i];
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (grid[i][j] != grid[2 - i][2 - j]) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}