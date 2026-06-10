class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          vector<int>c;
       for(int i=0;i<nums1.size();i++){
       if(find(c.begin(),c.end(),nums1[i])==c.end())
       {
        if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
        c.push_back(nums1[i]);
       }
       }
       return c;
       
    }
};