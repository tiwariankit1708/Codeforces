#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s.back() << '\n';
        } else {
            cout << s << '\n';
        }
    }
    return 0;
}