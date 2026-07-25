#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int n,x;
        cin>>n>>x;
        if(x%2==0){
                cout<<0<<"\n";
        }else{
                cout<<n<<"\n";
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