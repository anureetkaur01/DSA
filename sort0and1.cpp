#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vct{0,1,0,0,1,1,0,1};
    int l=0;
    int r=vct.size()-1;
    while(l<r){
        if(vct[l]>vct[r])
        {swap(vct[l],vct[r]);
            l++;
            r--;
        }
     else   if(vct[l]==0 && vct[r]==0)
        l++;
   else     if(vct[l]==1 && vct[r]==1)
   r--;

else {
    r--;
    l++;
}
    }
    for(auto val:vct){
        cout<<val<<"  ";
    }
}