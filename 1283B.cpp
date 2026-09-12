#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long base_candies = (n / k) * k;
    
    long long rem = n % k;
    
    long long extra = min(rem, k / 2);
    
    // Maximum total distributed
    cout << base_candies + extra << "\n";
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