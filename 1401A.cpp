#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    
    if (n < k) {
        cout << k - n << "\n";
    } else {
        cout << (n - k) % 2 << "\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}