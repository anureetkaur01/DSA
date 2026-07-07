class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string res="0";
        string num=to_string(n);
        for(int i=0;i<num.length();i++){
            if(num[i]!='0')
            res+=num[i];
        }
       // i=0;
        int r;
        long long sum=0;
        while(n!=0){
            r=n%10;
            sum+=r;
            n=n/10;
        }
        res.erase(0,1);
        n=stoi(res);
        return n*sum;
    }
};