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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        int n = 1;

        while (temp->next != NULL) {
            n++;
            temp = temp->next;
        }

        k = k % n;

        if (k == 0)
            return head;

        // Connect last node to head
        temp->next = head;

        // Find the new tail
        temp = head;
        for (int i = 1; i < n - k; i++) {
            temp = temp->next;
        }

        // Update head and break the circle
        head = temp->next;
        temp->next = NULL;

        return head;
    }
};
