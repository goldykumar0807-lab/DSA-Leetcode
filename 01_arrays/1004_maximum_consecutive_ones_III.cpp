class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=INT_MIN;
        int n=nums.size();
        int flips=0;
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[j]==0) flips++;
        
        while(flips>k){
            if(nums[i]==0) flips--;
            i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return maxlen;
    }
};
