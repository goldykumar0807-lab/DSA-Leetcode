class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag=false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int m=s.length();
        int n=t.length();
        if(m!=n) return(flag);
        for(int i=0;i<m;i++){
            if(s[i]!=t[i]){
                flag=false;
                break;

            }
            else flag=true;
        }
        return(flag);
        
    }
};
