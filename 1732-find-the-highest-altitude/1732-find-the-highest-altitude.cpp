class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxalt=0;
        int n=gain.size();
        vector<int>arr(n+1);
        arr.push_back(0);
        for(int i=0;i<n;i++){
            arr[i+1]=arr[i]+gain[i];
            maxalt=max(maxalt,arr[i+1]);
        }
        return maxalt;
    }
};