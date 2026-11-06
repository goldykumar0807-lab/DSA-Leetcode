class Solution {
public:
    void display(TreeNode* root,vector<int> &ans){
        if(root==NULL) return;
        ans.push_back(root->val);
        display(root->left,ans);
        display(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        display(root,ans);
        return ans; 
    }
};
