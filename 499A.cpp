#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int n,x;
        cin>>n>>x;
        int ans=0;
        int moviestart=1;
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
                int left=0;
                int right=0;
                cin>>left;
                cin>>right;
                int gap=(left-moviestart)%x;
                ans+=gap+(right-left+1);
                moviestart=right+1;
        }
        cout<<ans<<"\n";
}