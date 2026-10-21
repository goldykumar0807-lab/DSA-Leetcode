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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        // slow is at middle
        ListNode* prev=NULL;
        ListNode* curr=slow->next;
        slow->next=NULL;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        // prev is at head of reversed list
        ListNode dummy(0,head);
        ListNode* temp=&dummy;
        ListNode* temp1=head;
        ListNode* temp2=prev;
        while( temp2!=NULL ){
                temp->next=temp1;
                temp1=temp1->next;
                temp=temp->next;
                temp->next=temp2;
                temp2=temp2->next;
                temp=temp->next;
        }
        if(temp1!=NULL) temp->next=temp1;
    
        head=dummy.next;
    }
};
