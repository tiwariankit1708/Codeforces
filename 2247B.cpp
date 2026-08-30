#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k, m;
    cin >> n >> k >> m;
    
    if (k > m) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << m - k + 1;
        for (int i = 1; i < n; ++i){
            cout << " " << 1;
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t){
        while (t--){
            solve();
        }
    }
    
    return 0;
}