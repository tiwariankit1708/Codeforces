#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int min_val = 1005;
    int max_val = 0;    
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        min_val = min(min_val, a);
        max_val = max(max_val, a);
    }
    
    cout << (n - 1) * (max_val - min_val) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}