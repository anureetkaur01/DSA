class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=1;
        int r=nums.size()-1;
        while(l<r){
            int count=0;
       int mid=(l+r)/2;
       for(int i=0;i<nums.size();i++){
        if(nums[i]<=mid)
        count++;
       }
       if(count<=mid)
       l=mid+1;
       else if(count>mid)
       r=mid;
        }
    return l;
    }
};