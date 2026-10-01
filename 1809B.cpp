#include <bits/stdc++.h>
using namespace std;

bool valid(long long x, long long n) {
    if (x >= 2000000000LL) return true;
    return (x + 1) * (x + 1) >= n;
}

void solve() {
    long long n;
    cin >> n;

    long long low = 0;
    long long high = 1e9;
    long long ans = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (valid(mid, n)) {
            ans = mid;
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }

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