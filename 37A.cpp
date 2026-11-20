#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[1001] = {0};      // cnt[x] = how many bars have length x

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        cnt[l]++;             // count this bar
    }

    int maxHeight = 0;        // tallest tower
    int towers = 0;           // number of towers

    for (int i = 1; i <= 1000; i++) {
        if (cnt[i] > 0) {
            towers++;                         // a new distinct length = a new tower
            if (cnt[i] > maxHeight)
                maxHeight = cnt[i];           // track the biggest group
        }
    }

    cout << maxHeight << " " << towers << endl;
    return 0;
}