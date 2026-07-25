
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << "\n";
        cout << 1 << " " << 3 << "\n";
        return;
    }
    
    int ans = (n + 1) / 2;
    cout << ans << "\n";
    int l = 1;
    int r = 3 * n;
    
    for(int i = 1; i <= ans; i++){
        cout << l << " " << r << "\n";
        l += 3;
        r -= 3; 
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
