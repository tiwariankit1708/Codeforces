#include <iostream>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long low = 1, high = n;
    long long eaten = 0;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        
        long long candies = (mid * (mid + 1)) / 2 - (n - mid);
        
        if (candies == k) {
            eaten = n - mid;
            break;
        } else if (candies < k) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    
    cout << eaten << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}