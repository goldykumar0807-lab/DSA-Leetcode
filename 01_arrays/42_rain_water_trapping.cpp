class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int max=height[0];
        vector <int> prev(n);
        prev[0]=-1;
        for(int i=1;i<n;i++){
            prev[i]=max;
            if(height[i]>max) max=height[i];
        }
        int max1=height[n-1];
        vector <int> next(n);
        next[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            next[i]=max1;
            if(height[i]>max1) max1=height[i];
        }
        for(int i=0;i<n;i++){
            if(next[i]>prev[i]) prev[i]=prev[i];
            else prev[i]=next[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(prev[i]>height[i]) count+=prev[i]-height[i];
        }
        return(count);
    }
};
