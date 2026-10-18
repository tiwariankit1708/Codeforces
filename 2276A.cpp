#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    
    int k = min(b, a - b);
    
    if (k >= 1) {
        cout << k << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}