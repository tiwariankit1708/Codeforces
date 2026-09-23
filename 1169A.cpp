#include <iostream>
using namespace std;

int main() {
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    
    while (true) {
        if (a == b) {
            cout << "YES\n";
            return 0;
        }
        
        if (a == x || b == y) {
            cout << "NO\n";
            return 0;
        }
        
        a++;
        if (a > n) {
            a = 1; 
        }
        
        b--;
        if (b < 1) {
            b = n;
        }
    }
    
    return 0;
}