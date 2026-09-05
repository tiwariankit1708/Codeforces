#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int l,r,k;
        cin>>l>>r>>k;
        int max_r=r/k;
        int ans=max(0, max_r-l+1);
        cout<<ans<<"\n";
}
 
int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}