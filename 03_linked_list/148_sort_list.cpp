
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // Base case
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // 1. Find the middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr &&
               fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Split into two lists
        ListNode* list1 = head;
        ListNode* list2 = slow->next;
        slow->next = nullptr;

        // 3. Sort both halves
        list1 = sortList(list1);
        list2 = sortList(list2);

        // 4. Merge the sorted halves
        return merge(list1, list2);
    }

private:
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (a != nullptr && b != nullptr) {
            if (a->val <= b->val) {
                tail->next = a;
                a = a->next;
            } else {
                tail->next = b;
                b = b->next;
            }

            tail = tail->next;
        }

        tail->next = (a != nullptr) ? a : b;

        return dummy.next;
    }
};
