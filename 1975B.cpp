#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin>>n;
        if(n==1)cout<<"NO"<<"\n";
        vector<int> nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        sort(nums.begin(),nums.end());
        int num1=nums[0];
        int num2=0;
        for(int i=1;i<n;i++){
                if(nums[i]%num1==0){
                        continue;
                }else{
                        if(num2==0){
                               num2=nums[i];
                        continue; 
                        }
                        
                }
                if(nums[i]%num2!=0){
                        cout<<"NO"<<"\n";
                        return;
                }
                
        }
        cout<<"YES"<<"\n";
}

int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}