class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int s=nums[0];
        for(int i=1;i<nums.size();i++){
            if(abs(s)>abs(nums[i])){
                s=nums[i];
            }
            else if(abs(nums[i])==abs(s) && nums[i]>s){
                s=nums[i];
            }
        }
        return s;
        
        
    }
};