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
    ListNode* partition(ListNode* head, int x) {
        ListNode low(0);
        ListNode high(0);
        ListNode* temph=&high;
        ListNode* templ=&low;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                templ->next=temp;
                templ=templ->next;
            }
            else{
                temph->next=temp;
                temph=temph->next;
            }
            temp=temp->next;
        }
        templ->next=high.next;
        temph->next=NULL;
        return low.next;
    }
};
