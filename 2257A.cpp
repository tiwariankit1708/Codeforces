#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<string> words(n);
    vector<bool> avail(26, false);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
        avail[toupper(words[i][0]) - 'A'] = true;
    }
    
    vector<string> abbrevs(m);
    for (int i = 0; i < m; i++) {
        cin >> abbrevs[i];
    }
    
    vector<bool> used(m, false);
    int formed = 0;
    
    while (true) {
        bool changed = false;
        for (int i = 0; i < m; i++) {
            if (!used[i]) {
                bool can_form = true;
                for (char c : abbrevs[i]) {
                    if (!avail[c - 'A']) {
                        can_form = false;
                        break;
                    }
                }
                
                if (can_form) {
                    used[i] = true;
                    avail[abbrevs[i][0] - 'A'] = true;
                    changed = true;
                    formed++;
                }
            }
        }
        if (!changed) {
            break;
        }
    }
    
    if (formed == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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