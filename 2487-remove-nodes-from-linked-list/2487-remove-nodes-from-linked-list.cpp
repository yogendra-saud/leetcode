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
ListNode* reverse(ListNode* head) {
        ListNode* Next=head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
            
            
        } 
     return prev;
        
    }

    ListNode* removeNodes(ListNode* head) {
       head=reverse(head);
       ListNode* c=new ListNode(-1);
       ListNode* t=c;
       int x=INT_MIN;
       ListNode* temp=head;
       while(temp!=NULL){
        if(x<=temp->val)
        {
            t->next=temp;
            t=temp;
            x=temp->val;
        }
        temp=temp->next;
       }
       t->next=NULL;
        return reverse(c->next);
    }
};