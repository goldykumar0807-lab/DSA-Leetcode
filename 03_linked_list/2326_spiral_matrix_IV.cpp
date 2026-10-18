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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m, vector<int>(n, -1));

        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;

        ListNode* temp = head;

        while (minr <= maxr && minc <= maxc) {

            // 1. Traverse right
            for (int i = minc; i <= maxc; i++) {
                if (temp == NULL) return v;
                v[minr][i] = temp->val;
                temp = temp->next;
            }
            minr++;

            // 2. Traverse down
            for (int i = minr; i <= maxr; i++) {
                if (temp == NULL) return v;
                v[i][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;

            // 3. Traverse left
            if (minr <= maxr) {
                for (int i = maxc; i >= minc; i--) {
                    if (temp == NULL) return v;
                    v[maxr][i] = temp->val;
                    temp = temp->next;
                }
                maxr--;
            }

            // 4. Traverse up
            if (minc <= maxc) {
                for (int i = maxr; i >= minr; i--) {
                    if (temp == NULL) return v;
                    v[i][minc] = temp->val;
                    temp = temp->next;
                }
                minc++;
            }
        }

        return v;
    }
};
