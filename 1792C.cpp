#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
                if(s[low]!=s[high]){
                        low++;
                        high--;
                        ans-=2;
                }else{
                        break;
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