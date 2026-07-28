#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        string s;
        cin>>s;
        int k;
        cin>>k;
        int hnum=0;
        vector<int> nums(26);
        for(int i=0;i<26;i++){
                int num;
                cin>>num;
                if(num>hnum){
                        hnum=num;
                }
                nums[i]=num;
        }
        long long ans=0;
        int val=1;
        for(int i=0;i<s.length();i++){
                ans+=nums[s[i]-'a']*val;
                val++;
        }
        while(k--){
                ans+=val*hnum;
                val++;
        }
        cout<<ans<<"\n";
        
}
 
int main(){
        solve();
}