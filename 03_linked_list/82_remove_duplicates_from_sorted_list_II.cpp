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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* temp = &dummy;

        while (temp->next != nullptr) {
            ListNode* curr = temp->next;
            ListNode* next = curr->next;
            bool duplicate = false;

            while (next != nullptr && curr->val == next->val) {
                duplicate = true;
                next = next->next;
            }
            if (duplicate) {
                temp->next = next;
            } else {
                temp = curr;
            }
        }
        return dummy.next;
    }
};
