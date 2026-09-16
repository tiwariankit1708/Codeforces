#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> a(n), b(n);
    bool is_rated = false;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) {
            is_rated = true;
        }
    }
 
    if (is_rated) {
        cout << "rated\n";
        return 0;
    }
 
    bool is_unrated = false;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] < a[i + 1]) {
            is_unrated = true;
            break;
        }
    }
 
    if (is_unrated) {
        cout << "unrated\n";
    } else {
        cout << "maybe\n";
    }
 
    return 0;
}
