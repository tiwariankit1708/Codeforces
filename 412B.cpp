#include <bits/stdc++.h>
using namespace std;

int find(vector<int> nums,int a){
        int count=0;
        for(int i=0;i<nums.size();i++){
                if(nums[i]>=a){
                    count++;
                }
                
        }
        return count;
}

void solve(){
        int n,k;
        cin>>n>>k;
        vector<int> nums;
        int low=INT_MAX;
        int high=INT_MIN;
        
        for(int i=0;i<n;i++){
                int number;
                cin>>number;
                if(number<=low){
                        low=number;
                }
                if(number>=high){
                        high=number;
                }
                nums.push_back(number);
        }
        
        int ans=0;
        while(low<=high){
                int mid=low+(high-low)/2;
                if(find(nums,mid)>=k){
                        ans=mid;
                        low=mid+1;
                }else{
                        high=mid-1;
                }
        }
        cout<<ans<<"\n";
}

int main(){
        solve();
        return 0;
}