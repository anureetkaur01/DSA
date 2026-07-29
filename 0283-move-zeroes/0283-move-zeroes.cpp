class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=INT_MIN;
        //int j;
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0)
            {
                j=i;
                break;
            }
        }
        if(j==INT_MIN)
        return;
        for(i=j+1;i<nums.size();i++){
          if(nums[i]!=0)
          {
            swap(nums[j],nums[i]);
            j++;
          }
        }
    }
};