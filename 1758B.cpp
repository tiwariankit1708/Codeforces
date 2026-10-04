#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    if(n % 2 == 1){
        for(int i = 0; i < n; i++){
            cout << 1 << " ";
        }
        cout << "\n";
    } else {
        cout << "1 3 ";
        for(int i = 0; i < n - 2; i++){
            cout << 2 << " ";
        }
        cout << "\n";
    }
}

int main(){
    int t;
    if (cin >> t) {
        while(t--){
            solve();
        }
    }
    return 0;
}