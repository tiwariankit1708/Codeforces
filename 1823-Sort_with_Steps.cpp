#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        int mismatch=0;
        for(int i=0;i<n;i++)cin>>nums[i];
        for(int i=0;i<n;i++){
                if(nums[i]%k==(i+1)%k){
                        continue;
                }else{
                        mismatch++;
                }
        }
        if(mismatch==0){
                cout<<0<<"\n";
        }else if(mismatch==2){
                cout<<1<<"\n";
        }else{
                cout<<-1<<"\n";
        }
}
 
int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}