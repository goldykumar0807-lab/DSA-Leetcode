
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n + 1, 0);

        for (int i = 0; i < bookings.size(); i++) {
            int first = bookings[i][0];
            int last = bookings[i][1];
            int seats = bookings[i][2];

            ans[first - 1] += seats;
            ans[last] -= seats;
        }

        for (int i = 1; i <= n; i++) {
            ans[i] += ans[i - 1];
        }

        ans.pop_back();
        return ans;
    }
};
