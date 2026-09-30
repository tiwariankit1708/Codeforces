#include <bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        bool f1=false;
        bool f2=false;
        for(int i=0;i<n;i++){
                int number;
                cin>>number;
                if(number==1){
                        f1=true;
                }
                if(number==2){
                        f2=true;
                }
        }
        if(f1){
                cout<<-1<<"\n";
                return 0;
        }
        if(!f1){
                cout<<1<<"\n";
                
        }
}