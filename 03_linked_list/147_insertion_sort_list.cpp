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
    ListNode* insertionSortList(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode dummy(0);
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next=curr->next;
            ListNode* prev=&dummy;
            //now finding the correct position in sorted list
            while(prev->next!=NULL && prev->next->val<=curr->val){
                prev=prev->next;
            }
            // Insert current node
            curr->next = prev->next;
            prev->next = curr;

            curr = next;
        }
        return dummy.next;
        
    }
