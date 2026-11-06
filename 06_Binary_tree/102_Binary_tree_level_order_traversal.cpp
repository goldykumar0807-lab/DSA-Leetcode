class Solution {
public:
    int level(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
    }
    void nthlevel(TreeNode* root,vector<int> &v,int n){
        if(root==NULL) return;
        if(n==1){
            v.push_back(root->val);
            return;
        }
        n--;
        nthlevel(root->left,v,n);
        nthlevel(root->right,v,n);
    }
    void print(TreeNode* root,vector<vector<int>> &ans){
        int n=level(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            nthlevel(root,v,i);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        print(root,ans);
        return ans;
    }
};
