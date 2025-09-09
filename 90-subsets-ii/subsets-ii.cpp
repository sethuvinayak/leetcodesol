class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> result;
        vector<int> ds;
        helper(result, nums, ds, 0);
        return result;
    }

    void helper(vector<vector<int>> &result, vector<int>& nums, vector<int>& ds, int index) {
        result.push_back(ds); 

        for (int i = index; i < nums.size(); i++) {
            
            if (i > index && nums[i] == nums[i-1]) continue;

            ds.push_back(nums[i]);
            helper(result, nums, ds, i + 1);
            ds.pop_back();
        }
    }
};
