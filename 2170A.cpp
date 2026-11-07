#include <bits/stdc++.h>
using namespace std;

void solve(){
        long long n;
        cin>>n;
        if(n==1){
                cout<<1<<"\n";
                return;
        }
        if(n==2){
                cout<<9<<"\n";
                return;
        }
        long long in=4*n*n-n-4;
        long long ou=5*n*n-5*n-5;
        cout<<max(in,ou)<<"\n";
}

int main(){
        int t;
        cin>>t;
        while(t--){
                solve();
        }
        return 0;
}