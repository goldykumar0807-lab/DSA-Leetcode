
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        // Base case
        if(root == NULL || root == p || root == q) {
            return root;
        }

        // Search in left and right subtree
        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);

        // If both sides return non-NULL
        if(leftAns != NULL && rightAns != NULL) {
            return root;
        }

        // Otherwise return the non-NULL answer
        if(leftAns != NULL) return leftAns;
        
        return rightAns;
    }
};
