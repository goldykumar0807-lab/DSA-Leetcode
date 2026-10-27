/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        int n=0;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            n++;
        }
        head=prev;
        ListNode* temp=prev;
        stack<int> st;
        vector<int> ans(n,0);
        st.push(temp->val);
        ans[n-1]=0;
        temp=temp->next;
        for(int i=n-2;i>=0 && temp!=NULL;i--){
            while(st.size()!=0 && st.top()<=temp->val) st.pop();
            if(st.size()!=0) ans[i]=st.top();
            st.push(temp->val);
            temp=temp->next;
        }
        return ans;
        
    }
};
