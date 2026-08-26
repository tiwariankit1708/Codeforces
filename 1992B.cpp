#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n;
    int k;
    cin >> n >> k;
    
    long long max_val = 0;
    for (int i = 0; i < k; ++i) {
        long long a;
        cin >> a;
        max_val = max(max_val, a);
    }
    
2257    long long ans = 2LL * n - 2LL * max_val - k + 1LL;
    
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