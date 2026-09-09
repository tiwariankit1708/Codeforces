#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int max1 = 0; 
    int max2 = 0; 
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        if (x >= max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max2 = x;
        }
    }
    
    int k = min(max2 - 1, n - 2);
    
    cout << max(0, k) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}