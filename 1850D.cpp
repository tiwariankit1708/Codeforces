#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        int ans=0;
        int ma=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
                if((nums[i+1]-nums[i])<=k){
                        ans++;
                }else{
                        ans=0;
                }
                ma=max(ma,ans);
        }
        cout<<n-(ma+1)<<"\n";
}
int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}