#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n, k;
        cin >> n >> k;
        vector<long long> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];
        
        sort(nums.begin(), nums.end());
        long long numsub = 0;
        int i = 0; 
        int j = 0;
        
       
        while(i < k && j < n){ 
                long long current_val = nums[j] - numsub; 
                
                if(current_val > 0){
                        cout << current_val << "\n";
                        numsub = nums[j];
                        i++;
                }
                j++;
        }
        
        while(i < k){
                cout << 0 << "\n";
                i++; 
        }
}

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        solve();
        return 0;
}