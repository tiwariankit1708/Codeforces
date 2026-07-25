#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m;
    cin >> n >> m; // Fixed input syntax
    
    if (n == 1 && m == 1) {
        cout << 0 << "\n";
    } else if (n == 1 || m == 1) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
}
 
int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}