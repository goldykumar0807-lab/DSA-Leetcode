class Solution {
public:
    void check(TreeNode* root,int sum,bool &ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(root->val==sum){
                ans=true;
                return;
            }
        }
        check(root->left,sum-(root->val),ans);
        check(root->right,sum-(root->val),ans);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=false;
        check(root,targetSum,ans);
        return ans;
    }
};
