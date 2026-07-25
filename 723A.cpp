#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int x,y,z;
        cin>>x>>y>>z;
        
        int ans = max({x, y, z}) - min({x, y, z});
        cout<<ans<<"\n";
}
 
int main(){
        
        
    solve();
        
        
}