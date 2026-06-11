class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> result(2,0);
       // int pos=-1;
        if(nums.size()==1&&nums[0]==target)
            return result;

        result[0]=getbegin(nums,target);
        result[1]=getend(nums,target);
        return result;
    }
    int getend(vector <int> nums,int target){
 int l=0;
 int r=nums.size()-1;
 int pos=-1;
 int mid;
 while(l<=r){
        mid=(l+r)/2;
        if(nums[mid]==target){
            pos=mid;
            l=mid+1;
        }
        else if(nums[mid]>target)
              r=mid-1;
              else l=mid+1;
 }
 return pos;
    }
      int getbegin(vector <int> nums,int target){
 int l=0;
 int r=nums.size()-1;
 int pos=-1;
 int mid;
 while(l<=r){
        mid=(l+r)/2;
        if(nums[mid]==target){
            pos=mid;
            r=mid-1;
        }
        else if(nums[mid]<target)
             l=mid+1;
              else r=mid-1;
 }
 return pos;
    }
};