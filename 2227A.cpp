#include <bits/stdc++.h>
using namespace std;

void solve(){
        int x,y;
        cin>>x>>y;
        if(x%2==0 && y%2==0){
                cout<<"YES"<<"\n";
                return;
        }
        if(x%2!=0 && y%2!=0){
                cout<<"NO"<<"\n";
                return;
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