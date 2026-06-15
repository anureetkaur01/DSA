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
    int pairSum(ListNode* head) {
        vector<int>vct;
        ListNode *ptr=head;
        while(ptr!=NULL){
            vct.push_back(ptr->val);
            ptr=ptr->next;
        }
        int max=0;
        int n=vct.size();
        for(int i=0;i<n/2;i++){
            if((vct[i]+vct[n-1-i])>=max)
            max=vct[i]+vct[n-1-i];
        }
        return max;
    
    }
};