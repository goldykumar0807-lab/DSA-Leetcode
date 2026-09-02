class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int n=nums.size();
      int i=0;
      int j=n-1;
      int k=n-1;
      vector<int> v(n);
      while(i<=j){
        if(abs(nums[i])>abs(nums[j])){
            v[k]=nums[i]*nums[i];
            k--;
            i++;
        }
        else if(abs(nums[i])<abs(nums[j])){
            v[k]=nums[j]*nums[j];
            k--;
            j--;
        }
        else if(abs(nums[i])==abs(nums[j])){
            if(i!=j){
                 v[k]=nums[i]*nums[i];
                 k--;
                 i++;
                 v[k]=nums[j]*nums[j];
                 k--;
                 j--;
            }
            if(i==j){
                v[k]=nums[i]*nums[i];
                break;
            }
           
        }
      }
      nums=v;
      return(nums);
    
    }
};
