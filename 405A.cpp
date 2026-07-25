#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int t;
        cin>>t;
        vector<int> nums(t);
        for(int i=0;i<t;i++)cin>>nums[i];
        sort(nums.begin(),nums.end());
        for(int i=0;i<t;i++){
                cout<<nums[i]<<" ";
        }
        cout<<"\n";
}