class Solution {
public:
    bool solve(TreeNode* p, TreeNode* q){
        if(p==NULL || q==NULL) return p==q;
        if(p->val!=q->val) return false;
        return solve(p->left,q->right) && solve(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* p=root->left;
        TreeNode* q=root->right;
        return solve(p,q);
    }
};
