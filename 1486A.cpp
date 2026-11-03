#include <bits/stdc++.h>
using namespace std;

void solve(){
        long long n;
        cin>>n;
        vector<long long> nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        int sum=0;
        for(int i=0;i<n;i++){
                sum+=nums[i];
                if(sum<((i*(i+1)))/2){
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