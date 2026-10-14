
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int n = nums.size();
        int i = 0;
        int product = 1;
        int count = 0;
        for (int j = 0; j < n; j++) {
            product *= nums[j];
            while (product >= k) {
                product /= nums[i];
                i++;
            }
            count += j - i + 1;
        }
        return count;
    }
};
