class Solution {
public:
vector<int>NSE(vector<int>arr){
    int n=arr.size();
    vector<int>nse(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty())
        nse[i]=n;
        else nse[i]=st.top();

        st.push(i);
    }
    return nse;
}

vector<int>PSEE(vector<int>arr){
    int n=arr.size();
    vector<int>psee(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        if(st.empty())
        psee[i]=-1;
        else psee[i]=st.top();

        st.push(i);
    }
    return psee;
}

    int sumSubarrayMins(vector<int>& arr) {
        vector<int>nse=NSE(arr);
        vector<int>psee=PSEE(arr);
        int sum=0;
        int mod=1e9+7;
        int n=arr.size();
        for(int i=0;i<n;i++){
         int right=nse[i]-i;
         int left=i-psee[i];
         long long freq=((long long)left*right*arr[i])% mod;
         sum=(freq+sum)%mod;
        }
        return sum;
    }
};