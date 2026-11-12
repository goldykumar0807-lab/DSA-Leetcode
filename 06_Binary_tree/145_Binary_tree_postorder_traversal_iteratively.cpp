class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        //iterative approach
        vector<int> ans;
        if(root==NULL) return  ans;
        stack<TreeNode*> st;
        st.push(root);
        while(st.size()!=0){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left!=NULL) st.push(temp->left);
            if(temp->right!=NULL) st.push(temp->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
