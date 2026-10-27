#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> sticks(4);
    for (int i = 0; i < 4; ++i) {
        cin >> sticks[i];
    }

    // Sort the sticks in non-decreasing order: a <= b <= c <= d
    sort(sticks.begin(), sticks.end());

    int a = sticks[0], b = sticks[1], c = sticks[2], d = sticks[3];

    // The 4 possible combinations of 3 sticks (sum of two smaller sides vs largest side in combo)
    vector<pair<int, int>> combos = {
        {a + b, c}, // using sticks a, b, c
        {a + b, d}, // using sticks a, b, d
        {a + c, d}, // using sticks a, c, d
        {b + c, d}  // using sticks b, c, d
    };

    bool has_triangle = false;
    bool has_segment = false;

    for (const auto& p : combos) {
        int sum_two = p.first;
        int max_side = p.second;

        if (sum_two > max_side) {
            has_triangle = true;
        } else if (sum_two == max_side) {
            has_segment = true;
        }
    }

    if (has_triangle) {
        cout << "TRIANGLE\n";
    } else if (has_segment) {
        cout << "SEGMENT\n";
    } else {
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}