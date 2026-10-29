#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> stk;
    for (int i = 0; i < n; i++) {
        while (!stk.empty() && stk.back() < a[i]) {
            stk.pop_back();
        }
        stk.push_back(a[i]);
    }

    cout << stk.size() << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}