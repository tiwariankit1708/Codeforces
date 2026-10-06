#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<pair<int, int>> cam(n);
    for (int i = 0; i < n; i++) {
        cin >> cam[i].first >> cam[i].second;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            bool i_hits_j = (cam[i].first + cam[i].second == cam[j].first);
            bool j_hits_i = (cam[j].first + cam[j].second == cam[i].first);

            if (i_hits_j && j_hits_i) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}