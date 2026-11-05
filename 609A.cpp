#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
 
    // Sort in descending order to pick largest capacities first
    sort(nums.begin(), nums.end(), greater<int>());
 
    int count = 0;
    for (int i = 0; i < n; i++) {
        m -= nums[i];
        count++;
        if (m <= 0) {
            break;
        }
    }
 
    cout << count << "\n";
    return 0;
}