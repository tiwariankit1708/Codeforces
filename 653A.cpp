#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    // Sort the array and remove duplicate sizes
    sort(t.begin(), t.end());
    t.erase(unique(t.begin(), t.end()), t.end());

    // Check for 3 consecutive numbers
    if (t.size() >= 3) {
        for (size_t i = 0; i < t.size() - 2; ++i) {
            if (t[i + 1] == t[i] + 1 && t[i + 2] == t[i] + 2) {
                cout << "YES\n";
                return;
            }
        }
    }
    
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}