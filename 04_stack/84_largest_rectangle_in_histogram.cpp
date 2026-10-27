
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int maxi = 0;

        for (int i = 0; i <= n; i++) {
            int curr = (i == n) ? 0 : heights[i];

            while (!st.empty() &&
                   (i == n || heights[st.top()] > curr)) {
                int h = heights[st.top()];
                st.pop();

                int width;
                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                maxi = max(maxi, h * width);
            }

            if (i < n)
                st.push(i);
        }

        return maxi;
    }
};
