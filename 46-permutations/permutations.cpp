class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ds;
        vector<int> freq(nums.size(), 0);

        helper(result,ds,nums,freq);
        return result;
        
    }
    void helper(vector<vector<int>> &result,vector<int> &ds,vector<int> &nums,vector<int> freq)
    {
        if(ds.size()==nums.size()){
            result.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                helper(result,ds,nums,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }

    }
};