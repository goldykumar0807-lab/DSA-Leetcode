class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //iterative approach
        vector<int> ans;
        if(root==NULL) return ans;
        TreeNode* curr=root;
        stack<TreeNode*> st;
        while(curr!=NULL || st.size()!=0){
            //we have to reach the leftmost node of tree
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            ans.push_back(curr->val);
            st.pop();
            curr=curr->right;
        }
        return ans;
    }
};
