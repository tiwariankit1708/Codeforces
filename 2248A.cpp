#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            string s;
            cin >> s;
            
            bool r0 = false;
            bool r1 = false;
            string res = "";
            
            for (char c : s) {
                if (c == '0' && !r0) {
                    r0 = true;
                } else if (c == '1' && !r1) {
                    r1 = true;
                } else {
                    res += c;
                }
            }
            
            cout << res << "\n";
        }
    }
    
    return 0;
}