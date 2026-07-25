#include <bits/stdc++.h>
using namespace std;
 
void solve(){
        int n;
        cin>>n;
        int totalsum=0;
        vector<int> nums;
        for(int i=0;i<n;i++){
               int number;
               cin>>number;
               totalsum+=number;
               nums.push_back(number);
        }
        int x,y;
        cin>>x>>y;
        int csum=0;
        int point=2;
        int sum=0;
        for(int i=0;i<n;i++){
                sum+=nums[i];
                if(sum>=x && sum<=y){
                        int rem=totalsum-sum;
                        if(rem>=x && rem<=y){
                                cout<<point<<"\n";
                                return;
                        }
                }
                
                point++;
        }
        cout<<0<<"\n";
 
}
 
int main(){
        solve();
        return 0;
}