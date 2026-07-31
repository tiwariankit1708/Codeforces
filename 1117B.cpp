#include <bits/stdc++.h>
using namespace std;

void solve(){
        long long n,m,k;
        cin>>n>>m>>k;
        
        long long largest=0;
        long long slargest=0;
        for(int i=0;i<n;i++){
                int number;
                cin>>number;
                if(number>largest){
                        slargest=largest;
                        largest=number;
                }else if(number>slargest){
                        slargest=number;
                }
        }
        if(m==1){
            cout<<largest<<"\n";
            return;
        }
        long long value=(k)*largest+slargest;
        long long quo=m/(k+1);
        long long rem=m%(k+1);
        cout<<(value*quo)+(rem*largest)<<"\n";
}

int main(){
        solve();
        return 0;
}