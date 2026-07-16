class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       
         int l=0;
   int r=nums.size()-1;
   int mid;
   if(nums.size()==1) return 0;
   if(nums.size()==2) {
    if(nums[0]>nums[1]) return 0;
    else return 1;
   }
   while(l<=r){
        mid=(l+r)/2;
       if((mid==0||mid==nums.size()-1)||(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]))
       return mid;
       else if(nums[mid]<nums[mid-1])
       r=mid;
       else if(nums[mid]<nums[mid+1])
       l=mid+1;
   }
   return -1;
   
    }
};