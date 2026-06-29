#include<iostream>
	#include<map>
	#include<vector>
	using namespace std;
	    int maxFrequencyElements(vector<int>& nums) {
	        map<int,int>mp;
	        for(auto val:nums){
	            mp[val]++;
	        }
            map<int,int,greater<int>>mp2;
            for(auto a:mp){
                mp2[a.second]=a.first;
            }
	        int pos=nums[0];
	        int max=mp[nums[0]];
	        for(auto val: mp){
	            if(val.second>max)
	           { max=val.second;
	           pos=val.first;}
	        }
	        map<int,int>mbape;
	       mbape[pos]=max;
           mp.erase(pos);
	        int sum=0;
	        for(auto val: mp){
	   // mbape[pos]=max;
	    mp.erase(pos);
	    if(val.second==max)
	      {  pos=val.first;
            mbape[pos]=max;  
	      }
	        }
	        for(auto v: mbape){
	        sum+=v.second;
            }
	        
	return sum;
	    }
	    int main(){
	    vector<int>vct{1,2,2,1,3,4};
	    cout<<maxFrequencyElements(vct);
	    }
