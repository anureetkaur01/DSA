class Solution {
public:
    bool checkDivisibility(int n) {
        int n1=n;
        int sum=0;
        int prod=1;
        while(n1!=0){
            int r=n1%10;
            sum+=r;
            prod*=r;
            n1/=10;
        }
        if(n%(sum+prod)==0)
        return true;
        return false;
    }
};