#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int n;
        cin>>n;
        bool sorted=true;
        int prev=INT_MAX;
        for(int i=0;i<n;i++){
                int x,y;
                cin>>x>>y;
                int ch=0;
                if(x>y){
                        ch=x;
                }else{
                        ch=y;
                }
                if(ch==x){
                        if(ch<=prev){
                                prev=ch;
                                continue;
                        }else{
                                if(y<=prev){
                                        prev=y;
                                        continue;
                                }else{
                                        cout<<"NO"<<"\n";
                                        return 0;
                                }
                        }
                }else{
                        if(ch<=prev){
                                prev=ch;
                                continue;
                        }else{
                                if(x<=prev){
                                        prev=x;
                                        continue;
                                }else{
                                        cout<<"NO"<<"\n";
                                        return 0;
                                }
                        }
                        
                }
                
        }
        cout<<"YES"<<"\n";
}