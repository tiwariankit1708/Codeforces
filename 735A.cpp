#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;

    string s;
    cin >> s;

    int posG = s.find('G');
    int posT = s.find('T');

    if (abs(posG - posT) % k != 0) {
        cout << "NO\n";
        return 0;
    }

    int step = (posG < posT) ? k : -k;
    for (int i = posG + step; i != posT; i += step) {
        if (s[i] == '#') {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}