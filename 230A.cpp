#include <bits/stdc++.h>
using namespace std;

void solve(){
        int s,n;
        cin>>s>>n;
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
                int str,bon;
                p.push_back({str,bon});
        }
        sort(p.begin(),p.end());
        for(int i=0;i<n;i++){
            int str=p[i].first;
            int bon=p[i].second;
            if(str>=s){
                cout<<"NO"<<"\n";
                return;
            }
            s+=bon;
        }
        cout<<"YES"<<"\n";
}

int main(){
        solve();
        return 0;
}