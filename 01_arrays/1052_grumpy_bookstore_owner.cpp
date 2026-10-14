class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=grumpy.size();
        int k=minutes;
        int i=1;
        int j=k;
        int maxloss=0;
        int prevloss=0;
        int maxidx=0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevloss+=customers[i];
        }
        maxloss=prevloss;
        while(j<n){
            int currloss=prevloss-((grumpy[i-1]==1)?customers[i-1]:0)+((grumpy[j]==1)?customers[j]:0);
            if(currloss>maxloss){
                maxloss=currloss;
                prevloss=currloss;
                maxidx=i;
            }
            else {//currloss<=prevloss
                 prevloss=currloss;
            }
            i++;
            j++;
        }
            for(int i=maxidx;i<maxidx+k;i++) {
                if(grumpy[i]==1) grumpy[i]=0;
            }
            int max=0;
            for(int i=0;i<n;i++){
                if(grumpy[i]==0) max+=customers[i];
            }
            return max;
        
    }
};
