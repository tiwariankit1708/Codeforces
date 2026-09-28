
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    
    vector<int> evens, odds;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            evens.push_back(x);
        } else {
            odds.push_back(x);
        }
    }
    
    vector<int> nums;
    for (int x : evens) nums.push_back(x);
    for (int x : odds) nums.push_back(x);
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (gcd(nums[i], 2 * nums[j]) > 1) {
                ans++;
            }
        }
    }
    
    cout << ans << "\n";
}
 
int main(){ 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}