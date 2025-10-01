class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int esum=n*(n+1)/2;
        int asum=0;
        for(int i:nums){
            asum+=i;
        }
        return esum-asum;
        }
        
    };
