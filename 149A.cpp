#include <bits/stdc++.h>
using namespace std;

int main(){
        int k;
        cin>>k;
        vector<int> nums(12);
        for(int i=0;i<12;i++)cin>>nums[i];
        sort(nums.begin(),nums.end());
        int ans=0;
        int sum=0;
        for(int i=11;i>=0;i--){
                if(sum>=k)break;
                ans++;
                sum+=nums[i];
                
        }
        if(sum<k){
            cout<<-1<<"\n";
        }else{
            cout<<ans<<"\n";
        }
        return 0;
}