class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=INT_MIN;
        int tempcount=0;
        for(int i=0;i<nums.size();i++){
            
            if(!nums[i]){
                maxcount=max(tempcount,maxcount);
                tempcount=0;

            }
            else{
                tempcount++;
                maxcount=max(tempcount,maxcount);
            }

        }
        return maxcount;
        
    }
};