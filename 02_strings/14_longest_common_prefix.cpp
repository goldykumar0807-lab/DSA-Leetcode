class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string v;
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string s=strs[0];
        string t=strs[n-1];
        for(int i=0;i<min(s.size(),t.size());i++){
            if(s[i]==t[i]){
             char ch;
             ch=s[i];
             v.push_back(ch);
            } 
            else break;
        }
        return(v);
        
    }
};
