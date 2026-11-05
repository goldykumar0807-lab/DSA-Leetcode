class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL) return p==q;       
        bool lstans=isSameTree(p->left,q->left);
        bool rstans=isSameTree(p->right,q->right);
        return (lstans && rstans && p->val==q->val);
    }
};
