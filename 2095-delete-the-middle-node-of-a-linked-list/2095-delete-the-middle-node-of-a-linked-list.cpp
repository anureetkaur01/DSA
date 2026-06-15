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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next ==NULL)
        return NULL;
        ListNode *sp=head;
        ListNode *fp=head;
        while(fp->next!=NULL && fp->next->next!=NULL){
            sp=sp->next;
            fp=fp->next->next;
        }
        if(fp->next!=NULL)
        sp=sp->next;
         fp=head;
        while(fp->next!=sp){
            fp=fp->next;
        }
        fp->next=sp->next;
         delete sp;
         return head;
    }
};