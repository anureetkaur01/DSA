/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
        return false;
       ListNode *ptr=head;
       int count;
       vector <int> arr;
       while(ptr!=NULL){
        arr.push_back(ptr->val);
        ptr=ptr->next;
       }
       count=arr.size();
       if(count==1)
       return true;     
       for(int i=0;i<count/2;i++){
        if(arr[i]!=arr[count-1-i])
        return false;
       }
       return true;
    }
};