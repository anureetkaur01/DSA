class Solution {
public:
  /* int fun(int idx,vector<int>&nums,vector<int>&dp){
    if(idx==0)
    return nums[idx];
    if(idx<0)
    return 0;
    if(dp[idx]!=-1)
    return dp[idx];
    int pick=nums[idx]+fun(idx-2,nums,dp);
    int notpick=fun(idx-1,nums,dp);
    return dp[idx]=max(pick,notpick);
   }*/
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        int prev2=0;
        int prev=nums[0];
        for(int i=1;i<n;i++){
           // int take=nums[i];
            if(n>1)
           { int pick=nums[i]+prev2;
             int notpick=prev;
          int  take=max(notpick,pick);
            prev2=prev;
            prev=take;
           }
        }
        return prev;
    }
};