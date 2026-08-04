
#include <bits/stdc++.h>
using namespace std;
 
int main(){
        long long n,m,a;
        cin>>n>>m>>a;
        long long row=0;
        long long column=0;
        row=(n+a-1)/a;
        column=(m+a-1)/a;
        cout<<row*column<<"\n";
}