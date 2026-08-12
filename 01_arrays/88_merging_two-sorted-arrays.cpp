class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=0;
    int j=0;
    int k=0;
    int m1=nums1.size();
    int n1=nums2.size();
    m1=m1-n1;
    vector <int> nums3(m1+n1);
    while (i<m1 && j<n1){
        if(nums2[j]>nums1[i]){
        nums3[k]= nums1[i];
         k++;
        i++;
        }
        else if(nums1[i]>nums2[j]){
            nums3[k]=nums2[j];
            k++;
            j++;
        }
        else {
        nums3[k]=nums2[j];
        k++;
        i++;
        nums3[k]=nums2[j];
        k++;
        j++;
        }
    }
        // when one array is finished.
        if(i==m1){
            while(j<n1){
                nums3[k]=nums2[j];
                k++;
                j++;
            }
        }
        if(j==n1){
            while(i<m1){
                nums3[k]=nums1[i];
                k++;
                i++;
            }
        }
        nums1=nums3;
    
    }
};
