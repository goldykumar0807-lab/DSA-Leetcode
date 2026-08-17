class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
         int i=0;
         int j=n-1;
        bool flag=false;
        while(i<m && j>=0){
             if(matrix[i][j]<target) i++; // going downwards.
             else if(matrix[i][j]>target) j--;//going leftwards.
             else if(matrix[i][j]==target) {
             flag=true;
             break;
        }
    }
    return(flag);  
    }
};
