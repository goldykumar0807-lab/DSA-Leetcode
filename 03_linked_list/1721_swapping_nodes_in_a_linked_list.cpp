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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        ListNode* tempbegin=head;
        for(int i=1;i<k;i++) tempbegin=tempbegin->next;
        ListNode* tempend=head;
        for(int i=1;i<n-k+1;i++) tempend=tempend->next;
        swap(tempbegin->val,tempend->val);
        return head;
    }
};
