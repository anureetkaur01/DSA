class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(auto v:nums){
        mp[v]++;
        }
        for(auto m:mp){
            if(m.second>n/2)
            return m.first;
        }
        return -1;
    }
};