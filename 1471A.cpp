#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n,x;
        cin>>n>>x;
        long long maxsum=0;
        long long minsum=0;
        for(int i=0;i<n;i++){
                long long num;
                cin>>num;
                minsum+=num;
                maxsum+=(num+x-1)/x;
        }
        minsum=(minsum+x-1)/x;
        cout<<minsum<<" "<<maxsum<<"\n";
        
}

int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}