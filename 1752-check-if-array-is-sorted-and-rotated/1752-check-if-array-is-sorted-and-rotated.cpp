class Solution {
public:
    bool check(vector<int>& nums) {
        int i;
        int n=nums.size();
        int k;
        int count=0;
        for(i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1])
            count++;
            else break;
        }
        if(n==(count+1))
        return true;
        else{
            k=count+1;
            vector<int>arr(n);
            for(i=0;i<n;i++){
                arr[i]=nums[(i+k)%n];
            }
            for(i=1;i<n;i++){
                if(arr[i]<arr[i-1])
                return false;
            }
        }
        return true;
    }
};