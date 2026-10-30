class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                st.push(temp1);
                int x=temp1+temp2;
                st.push(x);
            }
            else if(operations[i]=="D"){
                int temp1=st.top();
                int x=2*temp1;
                st.push(x);
            }
            else if(operations[i]=="C") st.pop();
            else{
                int x=stoi(operations[i]);
                st.push(x);
            }
        }
        int sum=0;
        while(st.size()>0){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
