class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int far=0,jumps=0,end=0;
        for(int i=0;i<n-1;i++){
            far=max(far,i+nums[i]);
            if(i==end){
                jumps++;
                end=far;
            }
        }
        return jumps;
        
    }
};