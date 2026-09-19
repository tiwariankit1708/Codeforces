#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }

    // Collect all indices where p[i] != i
    vector<int> bad_indices;
    for (int i = 1; i <= n; ++i) {
        if (p[i] != i) {
            bad_indices.push_back(i);
        }
    }

    // If already sorted, reversing 1 element does nothing and keeps it sorted
    if (bad_indices.empty()) {
        cout << "YES\n";
        return;
    }

    // Check if reversing the elements at the bad indices sorts the permutation
    int m = bad_indices.size();
    bool possible = true;
    for (int j = 0; j < m; ++j) {
        // The element at index bad_indices[j] should move to index bad_indices[m - 1 - j],
        // which means its value must equal bad_indices[m - 1 - j].
        if (p[bad_indices[j]] != bad_indices[m - 1 - j]) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}