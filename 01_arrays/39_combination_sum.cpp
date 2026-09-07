class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    void combination(vector<int>& candidates, int target,int index){
        if(target==0){
            ans.push_back(v);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            sort(candidates.begin(),candidates.end());
            if(candidates[i]>target) break;
            v.push_back(candidates[i]);
            combination(candidates,target-candidates[i],i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        combination(candidates,target,0);
        return ans;
    }
};
