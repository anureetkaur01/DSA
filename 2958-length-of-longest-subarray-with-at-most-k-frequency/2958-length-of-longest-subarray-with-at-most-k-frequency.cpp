class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>mp;
        int maxi=0;
        if(nums.size()==1)
        return 1;
        int i=0;
        int j=0;
       // mp[nums[i]]++;
        //mp[j]++;
        while(j<nums.size()){
           mp[nums[j]]++;
           while(mp[nums[j]]>k)
           {
            mp[nums[i]]--;
            i++;
           }
           maxi=max(maxi,j-i+1);
           j++;
        }
        return maxi;
    }
};