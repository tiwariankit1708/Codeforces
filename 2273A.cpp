#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int K = 1;
    while (true) {
        long long max_oranges = 0;
        for (int i = 1; i <= n; ++i) {
            max_oranges += (long long)i * (K / i);
            if (max_oranges >= n) break;
        }
        if (max_oranges >= n) break;
        K++;
    }

    vector<int> result;
    int current_element = 1;
    int remaining = n;

    for (int i = 1; i <= n && remaining > 0; ++i) {
        int max_c = K / i; 
        
        while (max_c > 0 && remaining >= i) {
            if (remaining - i < 0) break;

            for (int k = 0; k < i; ++k) {
                result.push_back(current_element);
            }
            current_element++;
            remaining -= i;
            max_c--;
        }

        if (remaining > 0 && remaining < i + 1 && max_c > 0) {
        }
    }

    while (remaining > 0) {
        result.push_back(current_element++);
        remaining--;
    }

    cout << K << "\n";
    for (int i = 0; i < n; ++i) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}