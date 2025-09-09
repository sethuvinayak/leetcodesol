class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ds;
        helper(result,nums,ds,0);
        return result;
        
    }
    void helper(vector<vector<int>> &result,vector<int>& nums,vector<int> &ds,int index){
        if(index==nums.size()){
            result.push_back(ds);
            return;
        }
        ds.push_back(nums[index]);
        helper(result,nums,ds,index+1);
        ds.pop_back();
        helper(result,nums,ds,index+1);
    }
};