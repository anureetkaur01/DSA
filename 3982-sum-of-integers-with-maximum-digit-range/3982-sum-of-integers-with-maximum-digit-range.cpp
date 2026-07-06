class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int i;
        vector<int>diff(nums.size());
       
        int maxDiff=0;int sum=0;
        for(i=0;i<nums.size();i++){
            int n=nums[i];
            int maxi=0;
        int mini=9;
            while(n!=0){
                int r=n%10;
                maxi=max(maxi,r);
                mini=min(mini,r);
                n=n/10;
            }
            diff[i]=maxi-mini;
            maxDiff=max(maxDiff,diff[i]);
        }
        for(i=0;i<diff.size();i++){
            if(maxDiff==diff[i])
            sum+=nums[i];
        }
        return sum;
    }
};