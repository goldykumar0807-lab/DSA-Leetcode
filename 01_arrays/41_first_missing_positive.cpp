class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]>=1 && nums[i]<=n ){
                int correctidx=nums[i]-1;
                if(nums[i]!=nums[correctidx]){
                swap(nums[i],nums[correctidx]);
                }
                else i++;
            }
            else i++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;

    }
};
