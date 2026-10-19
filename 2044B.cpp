#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string a;
    cin >> a;
    
    reverse(a.begin(), a.end());
    
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == 'p') {
            a[i] = 'q';
        } else if (a[i] == 'q') {
            a[i] = 'p';
        }
    }
    
    cout << a << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}