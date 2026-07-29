class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int want=target-nums[i];
          if(mp.find(want)!=mp.end()){
            result.push_back(i);
            result.push_back(mp[want]);
          }
          mp[nums[i]]=i;

        }
        return result;
    }
};