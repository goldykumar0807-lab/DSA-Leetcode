class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        vector<int> suf(n);
        suf[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--) suf[i]=satisfaction[i]+suf[i+1];
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suf[i]>0){
                idx=i;
                break;
            }
        }
        int LC=0;
        if(idx==-1) return LC;
        else{
        for(int i=idx;i<n;i++){
            LC+=satisfaction[i]*(i-idx+1);
        }
        return LC;  
        }
    }
};
