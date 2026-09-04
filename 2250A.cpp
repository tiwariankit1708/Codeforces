#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        sort(nums.begin(),nums.end());
        if(n%2!=0){
                cout<<"NO"<<"\n";
                return;
        }
        int min_odd_pos = 2e9 + 7; 
        int max_even_pos = -1;     

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                min_odd_pos = min(min_odd_pos, nums[i]);
            } else {
                max_even_pos = max(max_even_pos, nums[i]);
            }
        }

        if (max_even_pos < min_odd_pos - 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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
