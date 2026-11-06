class Solution {
public:
    int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
    }
    
    void print(TreeNode* root,vector<vector<int>> &ans,int level){
        if(root==NULL) return;
        ans[level].push_back(root->val);
        print(root->left,ans,level+1);
        print(root->right,ans,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=level(root);
        vector<vector<int>> ans;
        vector<int> v;
        for(int i=1;i<=n;i++){
            ans.push_back(v);
        }
        print(root,ans,0);
        return ans;
    }
};
