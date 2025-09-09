class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> ds;
        helper(result,candidates,target,ds,0);
        return result;
        
    }
    void helper(vector<vector<int>> &result,vector<int>& candidates,int target,vector<int> &ds,int i){
        if(target==0){
            result.push_back(ds);
            return;

        }
        if(target<0 || i==candidates.size()){
            return;
        }
        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1])continue;
            if(candidates[j]>target) break;
        ds.push_back(candidates[j]);
        helper(result,candidates,target-candidates[j],ds,j+1);
        ds.pop_back();
        
        }
    }
};