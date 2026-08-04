class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        //int count=0;
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i]+1!=nums[i+1]){
           // count=nums[i+1]-nums[i]-1;
            int j=nums[i]+1;
            if(j==nums[i+1]){
                ans.push_back(j);
                return ans;
            }
            while(j!=nums[i+1]){
               // int j=nums[i]+1;
                ans.push_back(j);
                j++;
            }
           }
           
        }
        return ans;
    }
};