#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int flipped = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            flipped++;
        } else {
            flipped++;
            break;
        }
    }
    
    cout << flipped << "\n";
    
    return 0;
}