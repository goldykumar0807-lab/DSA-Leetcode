class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int x=nums.size();
    int i=0;
    int j=1;
    while(j<x){
        if(nums[i]==0 && nums[j]!=0){
            int temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
            i++;
            j++;
        }
        else if(nums[i]==0 && nums[j]==0){
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    }
 };
