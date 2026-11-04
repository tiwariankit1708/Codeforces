#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    long long p = 0;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        if (i % 2 == 0) {
            p += a; // Add for 1st, 3rd, 5th, ... element (0-indexed: 0, 2, 4...)
        } else {
            p -= a; // Subtract for 2nd, 4th, 6th, ... element (0-indexed: 1, 3, 5...)
        }
    }
    cout << p << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}