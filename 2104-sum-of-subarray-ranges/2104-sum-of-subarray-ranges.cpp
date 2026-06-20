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

    long long sumSubarrayMins(vector<int>& arr) {
        vector<int>nse=NSE(arr);
        vector<int>psee=PSEE(arr);
        long long sum=0;
      //  int mod=1e9+7;
        int n=arr.size();
        for(int i=0;i<n;i++){
         long long right=nse[i]-i;
         long long left=i-psee[i];
         sum+=left*right*arr[i]*1LL;
        // sum=(freq+sum)%mod;
        }
        return sum;
    }

    
vector<int>NGE(vector<int>arr){
    int n=arr.size();
    vector<int>nge(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.empty())
        nge[i]=n;
        else nge[i]=st.top();

        st.push(i);
    }
    return nge;
}

vector<int>PGEE(vector<int>arr){
    int n=arr.size();
    vector<int>pgee(n);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]<arr[i]){
            st.pop();
        }
        if(st.empty())
        pgee[i]=-1;
        else pgee[i]=st.top();

        st.push(i);
    }
    return pgee;
}

    long long sumSubarrayMax(vector<int>& arr) {
        vector<int>nge=NGE(arr);
        vector<int>pgee=PGEE(arr);
        long long sum=0;
        //int mod=1e9+7;
        int n=arr.size();
        for(int i=0;i<n;i++){
         long long right=nge[i]-i;
         long left=i-pgee[i];
        sum+=left*right*arr[i]*1LL;
        // sum=(freq+sum)%mod;
        }
        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
     return sumSubarrayMax(nums)-sumSubarrayMins(nums);
        //long long diff=(maxsums-minsums);
       // return diff;
    }
};