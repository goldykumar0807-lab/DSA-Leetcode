class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return(nums[0]);
        sort(nums.begin(),nums.end());
        return(nums[n/2]); 
    }
};
