class Solution {
public:
    vector<int> v1;
    vector<vector<int>> v;
    int idx=0;
    void print(vector<int> &nums,int idx,vector<vector<int>> &v,vector<int> &v1){
        if(idx==nums.size()){
            v.push_back(v1);
            return;
        }
        v1.push_back(nums[idx]);
        print(nums,idx+1,v,v1);
        v1.pop_back();
        print(nums,idx+1,v,v1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        print(nums, 0, v, v1);
        return v;   
    }
};
