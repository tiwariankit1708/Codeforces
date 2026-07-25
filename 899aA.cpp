#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int n;
        cin>>n;
        map<int,int> nums;
        for(int i=0;i<n;i++){
                int number;
                cin>>number;
                nums[number]++;
        }
        int onegroup=nums[1];
        int twogroup=nums[2];
        int group=min(onegroup,twogroup);
        int diff=0;
        if(onegroup>twogroup){
                diff=abs(twogroup-onegroup);
                
        }
        if(diff>=3){
                group+=diff/3;
        }
        cout<<group<<"\n";
}