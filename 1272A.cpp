#include <bits/stdc++.h>
using namespace std;

void solve(){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> nums={a,b,c};
        sort(nums.begin(),nums.end());
        a=nums[0];
        b=nums[1];
        c=nums[2];
        cout<<max(0,2*(c-a-2))<<"\n";
}

int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}