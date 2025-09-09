class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
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
        if(i==candidates.size() || target<0) return;
        ds.push_back(candidates[i]);
        helper(result,candidates,target-candidates[i],ds,i);
        ds.pop_back();
        helper(result,candidates,target,ds,i+1);
    }
};