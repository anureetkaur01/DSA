class Solution {
public:
    int findGCD(vector<int>& nums) {
       int min=INT_MAX;
       int max=INT_MIN;
       int i;int gcd=1;
       int n=nums.size();
       for(i=0;i<n;i++){
        if(min>nums[i])
        min=nums[i];
       }
       for(i=0;i<n;i++){
        if(max<nums[i])
        max=nums[i];
       } 
       for(i=1;i<=min;i++)
       {
        if(max%i==0 && min%i==0)
        gcd=i;
       }
       return gcd;
    }
};