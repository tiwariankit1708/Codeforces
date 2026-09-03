#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int len = 2 * n;
    vector<int> a(len + 1);
    vector<int> first_occ(n + 1, 0);
    vector<int> L(n + 1, 0), R(n + 1, 0);
    
    for (int i = 1; i <= len; ++i) {
        cin >> a[i];
        if (first_occ[a[i]] == 0) {
            first_occ[a[i]] = i;
            L[a[i]] = i;
        } else {
            R[a[i]] = i;
        }
    }
    
    vector<int> R_to_element(len + 1, 0);
    for (int i = 1; i <= n; ++i) {
        R_to_element[R[i]] = i;
    }
    
    vector<long long> dp(len + 1, 0);
    
    for (int i = 1; i <= len; ++i) {
        dp[i] = dp[i - 1]; 
        
        if (R_to_element[i] != 0) {
            int x = R_to_element[i];
            int l = L[x];
            long long length = i - l + 1;
            long long weight = length * length - length;
            
            dp[i] = max(dp[i], dp[l - 1] + weight);
        }
    }
    
    long long ans = 2LL * n + dp[len];
    cout << ans << "\n";
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