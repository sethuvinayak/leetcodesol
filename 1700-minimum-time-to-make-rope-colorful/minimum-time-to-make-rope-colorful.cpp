class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        long long result = 0;
        
        int i = 0;
        while (i < n) {
            
            int j = i;
            long long sum = 0;
            int mx = 0;
            
            
            while (j < n && colors[j] == colors[i]) {
                sum += neededTime[j];
                mx = max(mx, neededTime[j]);
                j++;
            }
            
            
            result += (sum - mx);
            
            
            i = j;
        }
        
        return (int)result;
    }
};
