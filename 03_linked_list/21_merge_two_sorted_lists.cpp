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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(1000);
        ListNode* temp=&dummy;
        ListNode* tempa=list1;
        ListNode* tempb=list2;
        while(tempa!=NULL && tempb!=NULL){
            if(tempb->val>tempa->val){
                temp->next=tempa;
                tempa=tempa->next;
            }
            else{
                temp->next=tempb;
                tempb=tempb->next;
            }
            temp=temp->next;
        }
        if(tempa==NULL) temp->next=tempb;
        else temp->next=tempa;
        return dummy.next;        
    }
};
