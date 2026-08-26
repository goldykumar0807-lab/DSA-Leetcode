class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int x=target;
        int low=0;
        int high=n-1;
        int idx=-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]==x){
                idx=mid;
                break;
            }
            else if(nums[mid]>x) high=mid-1;
            else if(nums[mid]<x) low=mid+1;
        }
        return(idx);
        
    }
};
