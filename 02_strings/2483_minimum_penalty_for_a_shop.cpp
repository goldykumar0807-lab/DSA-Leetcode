
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();

        vector<int> pre(n + 1, 0);
        vector<int> suf(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1];
            if (customers[i - 1] == 'N') {
                pre[i]++;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1];
            if (customers[i] == 'Y') {
                suf[i]++;
            }
        }

        int minpen = INT_MAX;
        int earlyhour = 0;

        for (int i = 0; i <= n; i++) {
            int penalty = pre[i] + suf[i];

            if (penalty < minpen) {
                minpen = penalty;
                earlyhour = i;
            }
        }

        return earlyhour;
    }
};
