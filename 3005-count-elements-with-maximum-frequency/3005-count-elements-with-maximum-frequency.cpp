class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
          map<int,int>mp;
        for(auto val:nums){
            mp[val]++;
        }
        int pos=nums[0];
        int max=mp[nums[0]];
        for(auto val: mp){
            if(val.second>max)
           { max=val.second;
           pos=val.first;
           }
        }
        map<int,int>mbape;
        mbape[pos]=max;
        mp.erase(pos);
        int sum=0;
        for(auto val: mp){
   // mbape[pos]=max;
    mp.erase(pos);
    if(val.second==max)
      { pos=val.first;
         mbape[pos]=max;
      }
    }
     for(auto v: mbape){
  sum+=v.second;
        }
        
return sum;
    }
};