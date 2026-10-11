class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        long long n=nums.size();
        vector<long long> conv(n);
        conv[0]=2*nums[0];
        for(int i=1;i<n;i++){
            int k=(conv[i-1]-nums[i-1]);
            int max1=max(k,nums[i]);
            conv[i]=nums[i]+max1;
        }
        for(int i=1;i<n;i++){
            conv[i]=conv[i]+conv[i-1];
        }
        return conv; 
    }
};
