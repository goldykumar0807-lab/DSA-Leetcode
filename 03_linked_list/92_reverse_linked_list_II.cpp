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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0, head);
        ListNode* a = &dummy;

        // Move a to the node just before position left
        for (int i = 1; i < left; i++) {
            a = a->next;
        }

        ListNode* b = a->next;
        ListNode* c = b;

        // Move c to position right
        for (int i = left; i < right; i++) {
            c = c->next;
        }

        ListNode* d = c->next;

        // Detach the sublist
        c->next = nullptr;

        // Reverse the sublist
        ListNode* prev = nullptr;
        ListNode* curr = b;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Reconnect the reversed sublist
        a->next = c;
        b->next = d;

        return dummy.next;
    }
};
