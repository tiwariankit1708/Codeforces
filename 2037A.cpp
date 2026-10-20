#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin>>n;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
                int number;
                cin>>number;
                mpp[number]++;
        }
        int ans=0;
        for(auto& [key,pair]:mpp){
                ans+=pair/2;
        }
        cout<<ans<<"\n";
}

int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}