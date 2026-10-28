class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //we have to make a next greater index array.
        int n=nums.size();
        vector<int> ngi(n);
        ngi[n-1]=n;
        stack<int> st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()!=0 && nums[st.top()]<=nums[i]) st.pop();
            if(st.size()!=0) ngi[i]=st.top();
            else ngi[i]=n;
            st.push(i);
        }
        vector<int> ans;
        for(int i=0;i<=n-k;i++){
            int j=i;
            while(ngi[j]<i+k){
                j=ngi[j];
            }
            ans.push_back(nums[j]);
        }
        return ans;
    }
};
