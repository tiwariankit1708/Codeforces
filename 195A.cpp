#include <bits/stdc++.h>
using namespace  std;
 
void solve(){
        int a,b,c;
        cin>>a>>b>>c;
        long long low=0;
        long long high=a*c;
        long long ans=0;
        while(low<=high){
                int mid=low+(high-low)/2;
                if((mid+c)*b>=c*a){
                        ans=mid;
                        high=mid-1;
                        
                }else{
                        low=mid+1;
                }
                
        }
        cout<<ans<<"\n";
}
 
int main(){
        solve();
        return 0;
}