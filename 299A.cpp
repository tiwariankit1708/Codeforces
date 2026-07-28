#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        sort(nums.begin(),nums.end());
        int ans=nums[0];
        for(int i=0;i<n;i++){
                if(nums[i]%ans==0){
                        continue;
                }else{
                        ans=-1;
                }
        }
        cout<<ans<<"\n";
}
 
int main(){
        solve();
}