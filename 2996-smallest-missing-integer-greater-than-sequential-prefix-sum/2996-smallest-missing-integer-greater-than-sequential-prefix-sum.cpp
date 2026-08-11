class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i=0;
        int j=1;
        map<int,int>mp;
        for(int n=0;n<nums.size();n++){
            mp[nums[n]]=n;
        }
        while(j<nums.size() && nums[j]==nums[j-1]+1){
            
            j++;
        }
        int sum=0;
        for(int m=i;m<j;m++){
          sum+=nums[m];
        }
        while(true){
            if(mp.find(sum)==mp.end())
            return sum;
            else sum++;

        }
        //return sum;
    }
};