
class Solution {
public:
    int pairSum(ListNode* head) {
        //first i have to reverse the second half of linke list
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=slow->next;
        slow->next=NULL;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //prev is my head of second half of list
        ListNode* temp1=head;
        ListNode* temp2=prev;
        int maxtwin=INT_MIN;
        while(temp1!=NULL){
            int x=temp1->val+temp2->val;
            maxtwin=max(maxtwin,x);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return maxtwin;
    }
};
