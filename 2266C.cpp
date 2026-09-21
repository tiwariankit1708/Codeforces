#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '1') {
        int z= 0;
        for (char c : s) {
            if (c == '0') z++;
        }
        cout << z << "\n";
        return;
    }

    int t = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            t = i + 1;
            break;
        }
    }

    if (t == -1) {
        cout << 0 << "\n";
        return;
    }

    vector<int> P(n + 1, 0);
    for (int i = 0; i < n; i++) {
        P[i + 1] = P[i] + (s[i] - '0');
    }

    int min_ops = n + 1; 

    for (int y = t - 1; y <= n; y++) {
        int ops = P[y] + (n - y) - (P[n] - P[y]);
        min_ops = min(min_ops, ops);
    }

    cout << min_ops << "\n";
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