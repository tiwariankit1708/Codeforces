#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    vector<long long> nums(n);
    long long min_val = 2e9, max_val = -2e9;
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        min_val = min(min_val, nums[i]);
        max_val = max(max_val, nums[i]);
    }
    
    if (min_val == max_val) {
        cout << n * (n - 1) << "\n";
        return;
    }
    long long min_count = 0;
    long long max_count = 0;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] == min_val) min_count++;
        if (nums[i] == max_val) max_count++;
    }
    
    long long ans = 2LL * min_count * max_count;
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