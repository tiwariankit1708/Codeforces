#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int rem=0;
        int ans=0;
        for(int i=0;i<n;i++){
                if(s[i]=='0' && rem==0){
                        ans++;
                }else if(s[i]=='1'){
                        rem=k;
                }else{
                        rem--;
                }
        }
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