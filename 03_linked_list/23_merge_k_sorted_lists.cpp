
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
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

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }

        int gap = 1;
        int n = lists.size();

        while (gap < n) {
            for (int i = 0; i + gap < n; i += gap * 2) {
                lists[i] = mergeTwoLists(lists[i], lists[i + gap]);
            }

            gap *= 2;
        }

        return lists[0];
    }
};
