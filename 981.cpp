#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int n;
        cin>>n;
        map<int, int> mpp;
        for(int i=0;i<n;i++){
                int a,x;
                cin>>a>>x;
                if(mpp.find(a)!=mpp.end()){
                        int number=mpp[a];
                        if(x>number){
                                mpp[a]=x;
                        }
                }else{
                        mpp[a]=x;
                }
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
                int a,x;
                cin>>a>>x;
                if(mpp.find(a)!=mpp.end()){
                        int number=mpp[a];
                        if(x>number){
                                mpp[a]=x;
                        }
                }else{
                        mpp[a]=x;
                }
        }
        long long ans=0;
        for(auto& [c,price]:mpp){
                ans+=price;
        }
         cout<<ans<<"\n";
}