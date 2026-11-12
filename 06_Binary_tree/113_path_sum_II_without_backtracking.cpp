class Solution {
public:
    void helper(TreeNode* root,vector<vector<int>> &ans,int sum,vector<int> path){
        if(root==NULL) return ;
        path.push_back(root->val);
        sum-=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==0){
                ans.push_back(path);
                return;
            }
            
        }
        helper(root->left,ans,sum,path);
        helper(root->right,ans,sum,path);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        helper(root,ans,targetSum,path);
        return ans;
    }
};
