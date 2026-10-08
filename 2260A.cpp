
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int n;
        cin>>n;
        int count0=0;
        bool atfirst=false;
        bool atlast=false;
        for(int i=0;i<n;i++){
                int number;
                cin>>number;
                if(i==0 && number==0){
                        atfirst=true;
                }
                if(i==n-1 && number==0){
                        atlast=true;
                }
                if(number==0){
                        count0++;
                }
        }
        if(atfirst && atlast){
                cout<<0<<"\n";
                return;
        }
        if(count0<2){
                cout<<-1<<"\n";
                return;
        }
        if(!atfirst && !atlast){
                cout<<2<<"\n";
        }else{
                cout<<1<<"\n";
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