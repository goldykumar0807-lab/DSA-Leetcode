
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tempa = list1;
        ListNode* tempb = list1;

        // Move tempa to index a - 1
        for (int i = 0; i < a - 1; i++) {
            tempa = tempa->next;
        }

        // Move tempb to index b + 1
        for (int i = 0; i <= b; i++) {
            tempb = tempb->next;
        }

        // Find the last node of list2
        ListNode* temp2 = list2;
        while (temp2->next != nullptr) {
            temp2 = temp2->next;
        }

        // Connect the lists
        tempa->next = list2;
        temp2->next = tempb;

        return list1;
    }
};
