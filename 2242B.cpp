#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> S1(n, 0);
    vector<int> S2(n, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        int v1 = (a[i] == 1) ? 1 : -1;
        int v2 = (a[i] == 1 || a[i] == 2) ? 1 : -1;
        
        S1[i] = (i > 0 ? S1[i - 1] : 0) + v1;
        S2[i] = (i > 0 ? S2[i - 1] : 0) + v2;
    }
    
    vector<int> M2(n);
    M2[n - 2] = S2[n - 2];
    for (int i = n - 3; i >= 1; --i) {
        M2[i] = max(M2[i + 1], S2[i]);
    }
    
    bool possible = false;
    for (int i = 0; i < n - 2; ++i) {
      if (S1[i] >= 0 && M2[i + 1] >= S2[i]) {
            possible = true;
            break;
        }
    }
    
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}