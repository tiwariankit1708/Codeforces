#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n, k; // Fixed: removed stray quote from k'
        cin >> n >> k;
        vector<long long> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];
        
        sort(nums.begin(), nums.end());
        long long numsub = 0;
        int i = 0; // Number of operations performed
        int j = 0; // Current index in the array
        
        // Fixed: j < n (instead of j < n-1) so we don't skip the last element
        while(i < k && j < n){ 
                // The current value after all previous subtractions
                long long current_val = nums[j] - numsub; 
                
                // If the element is greater than 0, it's our new minimum
                if(current_val > 0){
                        cout << current_val << "\n";
                        numsub = nums[j]; // Update total subtracted so far
                        i++; // We successfully did one operation
                }
                j++; // Always move to the next element
        }
        
        while(i < k){
                cout << 0 << "\n";
                i++; // Fixed: added i++ to prevent an infinite loop
        }
}

int main(){
        // Fast I/O is recommended for Codeforces
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        solve();
        return 0;
}