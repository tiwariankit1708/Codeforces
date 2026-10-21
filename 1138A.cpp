#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> t(n), runs;
    for (auto &x : t) scanf("%d", &x);
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (t[i] == t[i-1]) cnt++;
        else { runs.push_back(cnt); cnt = 1; }
    }
    runs.push_back(cnt);
    int ans = 0;
    for (size_t i = 0; i + 1 < runs.size(); i++)
        ans = max(ans, 2 * min(runs[i], runs[i+1]));
    printf("%d\n", ans);
    return 0;
}