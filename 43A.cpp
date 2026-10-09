#include <bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        string win="";
        int count=0;
        for(int i=0;i<n;i++){
                string team="";
                cin>>team;
                if(win==""){
                        count++;
                        win=team;
                        continue;
                }
                if(team!=win){
                        count--;
                }
                
                if(count==-1){
                        win=team;
                        count=1;
                }
                
                
        }
        cout<<win<<"\n";
}