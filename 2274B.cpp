#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<long long> a(n);
        for(auto&x:a) scanf("%lld",&x);
        long long hi=a[0], lo=a[0], ans=a[0];
        for(int i=1;i<n;i++){
            long long best = max(hi, max(-lo, 0LL));
            ans = max(ans, a[i]+best);
            long long nh = max({a[i], hi+a[i], 2*hi+a[i]});
            long long nl = min({a[i], lo+a[i], 2*lo+a[i]});
            hi=nh; lo=nl;
        }
        printf("%lld\n",ans);
    }
}