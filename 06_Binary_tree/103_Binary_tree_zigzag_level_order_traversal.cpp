
class Solution {
public:
    void zigzag(TreeNode* root, vector<vector<int>>& ans, int count) {
        if(root == NULL) return;

        deque<TreeNode*> dq;
        dq.push_back(root);

        while(!dq.empty()) {
            int x = dq.size();
            vector<int> v;

            while(x--) {
                if(count % 2 != 0) {
                    TreeNode* temp = dq.back();
                    dq.pop_back();

                    v.push_back(temp->val);

                    if(temp->left != NULL)
                        dq.push_front(temp->left);

                    if(temp->right != NULL)
                        dq.push_front(temp->right);
                }
                else {
                    TreeNode* temp = dq.front();
                    dq.pop_front();

                    v.push_back(temp->val);

                    if(temp->right != NULL)
                        dq.push_back(temp->right);

                    if(temp->left != NULL)
                        dq.push_back(temp->left);
                }
            }

            ans.push_back(v);
            count++;
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        zigzag(root, ans, 1);
        return ans;
    }
};
