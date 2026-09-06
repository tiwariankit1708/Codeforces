#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    vector<long long> a(n);
    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    // Sort to easily grab the k smallest or k largest elements
    sort(a.begin(), a.end());
    
    int k = (n + 1) / 2; // Equivalent to ceil(n/2)
    
    // Scenario 1: Group the k smallest sticks together
    long long sum_smallest = 0;
    for (int i = 0; i < k; ++i) {
        sum_smallest += a[i];
    }
    
    // Scenario 2: Group the k largest sticks together
    long long sum_largest = 0;
    for (int i = n - k; i < n; ++i) {
        sum_largest += a[i];
    }
    
    // Calculate the distance squared for both extremes
    long long dist1 = sum_smallest * sum_smallest + (total_sum - sum_smallest) * (total_sum - sum_smallest);
    long long dist2 = sum_largest * sum_largest + (total_sum - sum_largest) * (total_sum - sum_largest);
    
    cout << max(dist1, dist2) << "\n";
    
    return 0;
}