#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n,k;
        cin>>n>>k;
        map<int,int> mpp;
        vector<int> ni;
        for(int i=0;i<k;i++){
                int b,c;
                cin>>b>>c;
                if(mpp[b]>0){
                        mpp[b]+=c;
                }else{
                        mpp[b]+=c;
                        ni.push_back(b);
                }
                
        }
        vector<int> nums;
        for(int i=0;i<ni.size();i++){
                nums.push_back(mpp[ni[i]]);
                
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        int t=0;
        for(int i=nums.size()-1;i>=0;i--){
                if(t==n){
                        break;
                }
                ans+=nums[i];
                t++;
                
        }
        cout<<ans<<"\n";
        
}

int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
}