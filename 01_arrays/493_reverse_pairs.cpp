class Solution {
public:
int count=0;
void merge(vector<int> &a, vector<int> &b, vector<int> &v){
    int n1 = a.size();
    int n2 = b.size();
    int j = 0;
    for(int i = 0; i < n1; i++){
        while(j < n2 && a[i] > 2LL * b[j]){
            j++;
        }
        count += j;
    }
    int i = 0;
    j = 0;
    int k = 0;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            v[k++] = a[i++];
        }
        else{
            v[k++] = b[j++];
        }
    }
    while(i < n1){
        v[k++] = a[i++];
    }
    while(j < n2){
        v[k++] = b[j++];
    }
}
void mergesort(vector<int> &v){
    if(v.size()<=1) return;
    int n1=v.size()/2;
    int n2=v.size()-n1;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[n1+i];
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
}
    int reversePairs(vector<int>& nums) {
        mergesort(nums);
        return(count);

    }
};
