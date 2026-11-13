#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long g = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            g = __gcd(g, a[i]);
        }
        cout << a[n - 1] / g << "\n";
    }
    return 0;
}