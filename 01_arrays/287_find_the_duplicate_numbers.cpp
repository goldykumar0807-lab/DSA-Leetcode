class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int> v(n+1,0);
        for(int i=0;i<n+1;i++){
            if(v[nums[i]]==0) {
                v[nums[i]]=1;
            }
            else return nums[i]; 
        }
        return 100;
    }
};
