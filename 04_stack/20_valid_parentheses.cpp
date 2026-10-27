class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1) return false;
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(st.size()!=0 && (st.top()==')' || st.top()==']' || st.top()=='}')) return false;
            else if(st.size()!=0 && (st.top()=='(' && s[i]==')')) st.pop();
            else if(st.size()!=0 && (st.top()=='{' && s[i]=='}')) st.pop();
            else if(st.size()!=0 && (st.top()=='[' && s[i]==']')) st.pop();
            else st.push(s[i]);
        }
        if(st.size()==0) return true;
        else return false;
        
    }
};
