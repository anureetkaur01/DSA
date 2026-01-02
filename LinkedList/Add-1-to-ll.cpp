class Solution {
   public:
   ListNode *reverse(ListNode *head){
    if(head==NULL ||head->next==NULL)
    return head;
    ListNode *prev=NULL;
    ListNode *temp=head;
    ListNode *front=NULL;
    while(temp!=NULL){
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    
    return prev;
   }
    ListNode *addOne(ListNode *head) {
        ListNode *temp=reverse(head);
        int carry=1;
        while(temp!=NULL){
            temp->val+=carry;
            if(temp->val<10){
                carry=0;
                break;
            }
            else{
                temp->val=0;
                carry=1;
            }
            temp=temp->next;
            }
            if(carry==1)
            {
                 ListNode *newnode=new ListNode(1);
                 head=reverse(head);
                 newnode->next=head;
                 head=newnode;
                 return newnode;
                }
                else{
                    head=reverse(head);
                }
                return head;
    }
};
/*

class Solution {
   public:
   int helper(ListNode *head){
    if(head==NULL)
    return 1;
    int carry=helper(head->next);
 head->val+=carry;
 if(head->val<10)
 return 0;
 else{
    head->val=0;
    carry=1
 }
 return carry;
   }
   
    ListNode *addOne(ListNode *head) {
        int carry=helper(head);
        if(carry==1){
            ListNode *newnode=new ListNode(1);
            newnode->next=head;
            head=newnode;
        
            }
            return head;
       
    }
};
*/