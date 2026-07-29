class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        int start;
        int end;
        int anstart;
        for(int i=0;i<nums.size();i++){
            if(sum==0)
            start=i;

            sum+=nums[i];
            if(sum>maxi)
            {
                maxi=sum;
                end=i;
                anstart=start;
            }
            if(sum<0)
            sum=0;
        }
        return maxi;
    }
};