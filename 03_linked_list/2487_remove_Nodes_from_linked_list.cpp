class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        int maxi=head->val;
        ListNode* curr=head;
        while(curr->next!=NULL){
            if(curr->next->val<maxi){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
                maxi=curr->val;
            }
        }
        return reverse(head);

    }
};
