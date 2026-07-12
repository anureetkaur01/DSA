class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v=arr;
      sort(arr.begin(),arr.end());
      map<int,int>mp;
      int rank=1;
      for(auto i:arr){
        if(mp.find(i)==mp.end())
       mp[i]=rank++;
      }
      for(int j=0;j<arr.size();j++){
        arr[j]=mp[v[j]];
      }
      return arr;
    }
};