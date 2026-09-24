#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n - 2; i++) {
        if (a[i] + a[i+1] > a[i+2]) {
            cout << "YES\n";
            return 0;
        }
    }
    
    cout << "NO\n";
    return 0;
}