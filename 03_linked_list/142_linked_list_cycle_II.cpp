/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool flag=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                flag=true;
                break;
            }
        }
        if(flag==true){
            fast=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
                if(slow==fast) return slow;
            }
        }
        else return NULL;
        return slow;
    }
};
