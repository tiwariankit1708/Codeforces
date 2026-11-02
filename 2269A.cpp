#include <iostream>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long ans = (k - 1) * 2 + (1LL << (n - k + 1));
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}