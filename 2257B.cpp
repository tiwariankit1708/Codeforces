#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    long long a1 = 0;
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (i == 0) a1 = x;
    }
    
    long long b1 = 0;
    for (int i = 0; i < m; ++i) {
        long long x;
        cin >> x;
        if (i == 0) b1 = x;
    }
    
    long long h_bea = a1 + n - 1;
    long long h_ver = b1 + m - 1;
    
    if (h_bea >= h_ver) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}