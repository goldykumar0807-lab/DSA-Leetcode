class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //we have to make a next smaller element array
        stack<int> st;
        int n=prices.size();
        vector<int> nse(n,0);
        st.push(prices[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()!=0 && st.top()>prices[i]) st.pop();
            if(st.size()!=0) nse[i]=st.top();
            st.push(prices[i]);
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=prices[i]-nse[i];
        }
        return ans;
    }
};
