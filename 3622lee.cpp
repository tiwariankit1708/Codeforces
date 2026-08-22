class Solution {
public:
    bool checkDivisibility(int n) {
        long long prod=1;
        long long sum=0;
        int p=n;
        while(p>0){
            int rem=p%10;
            sum+=rem;
            prod*=rem;
            p=p/10;
        }
        long long s=prod+sum;
        if(n%s==0){
            return true;
        }else{
            return false;
        }
        return true;
    }
};