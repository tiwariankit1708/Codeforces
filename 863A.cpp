#include <bits/stdc++.h>

using namespace std;



int main(){

        string s;

        cin>>s;

        int n=s.length();

        if(n==1){

                cout<<"YES"<<"\n";

                return 0;

        }

        int q=n-1;

        while(s[q]=='0')q--;

        int i=0;

        while(i<q){

                if(s[i]!=s[q]){
                    cout<<"NO"<<"\n";

                        return 0;

                    

                }

                i++;

                q--;

        }

        cout<<"YES"<<"\n";

return 0;

        

}