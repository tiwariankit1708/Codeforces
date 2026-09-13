#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==1){
            int ans=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    ans++;
                }
            }
            cout<<ans<<"\n";
            return;
        }
        int ans=0;
        for(int i=0;i<n/k;i++){
                bool found=false;
                for(int j=0;j<k;j++){
                        if(s[k*i+j]=='0'){
                                found=true;
                        }
                }
                if(!found){
                    ans++;
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