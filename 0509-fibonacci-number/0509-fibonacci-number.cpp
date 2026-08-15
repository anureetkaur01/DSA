class Solution {
public:
 /*  int fibo(int n,vector<int>&dp){
      if(n<=1)
      return n;
      if(dp[n]!=-1)
      return dp[n];
      return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
   }*/
    int fib(int n) {
        if(n<=1) return n;
        //vector<int>dp(n+1);
        int prev2=0;
        int prev=1;
        for(int i=2;i<=n;i++){
            int curr=prev2+prev;
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};