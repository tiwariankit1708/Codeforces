#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin>>n;
        map<int,int> mpp;
        bool found=false;
        for(int i=0;i<n;i++){
                int number;
                cin>>number;
                if(number>2048){
                        continue;
                }
                if(number==2048){
                        
                        found=true;
                }
                mpp[number]++;
        }
        if(found){
                cout<<"YES"<<"\n";
                return;
        }
        vector<int> nums={1,2,4,8,16,32,64,128,256,512,1024,2048};
        for(int i=0;i<nums.size()-1;i++){
                int number=mpp[nums[i]];
                mpp[nums[i+1]]+=number/2;
        }
        if(mpp[2048]>0){
                 cout<<"YES"<<"\n";
        }else{
                cout<<"NO"<<"\n";
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