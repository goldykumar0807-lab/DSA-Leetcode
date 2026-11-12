
class Solution {
public:

    int countFrom(TreeNode* root, long long target) {

        if(root == NULL) return 0;

        int count = 0;

        if(root->val == target) {
            count++;
        }

        count += countFrom(root->left, target - root->val);
        count += countFrom(root->right, target - root->val);

        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {

        if(root == NULL) return 0;

        int ans = countFrom(root, targetSum);

        ans += pathSum(root->left, targetSum);
        ans += pathSum(root->right, targetSum);

        return ans;
    }
};
