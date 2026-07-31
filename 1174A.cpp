#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> nums(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }
 
    sort(nums.begin(), nums.end());
 
    if (nums[0] == nums[2 * n - 1]) {
        cout << -1 << "\n";
    } else {
        for (int i = 0; i < 2 * n; i++) {
            cout << nums[i] << (i == 2 * n - 1 ? "" : " ");
        }
        cout << "\n";
    }
 
    return 0;
}