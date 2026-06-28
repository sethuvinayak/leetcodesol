class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        for(int i=0;i<nums.size();i++){
            int start=i;
            
            while (i < nums.size() - 1 && nums[i] + 1 == nums[i + 1]) {
                i++;
            }

            if (start == i)
                result.push_back(to_string(nums[start]));
            else
                result.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
        }
        return result;
        
    }
};