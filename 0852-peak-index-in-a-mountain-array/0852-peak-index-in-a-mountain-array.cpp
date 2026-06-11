class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int l=0;
   int r=arr.size()-1;
   int mid;
   while(l<=r){
        mid=(l+r)/2;
       if((arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])||(mid==0||mid==arr.size()-1))
       return mid;
       else if(arr[mid]<arr[mid-1])
       r=mid;
       else if(arr[mid]<arr[mid+1])
       l=mid+1;
   }
   return 0;
    }
};