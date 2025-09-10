class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map<int, int> index; 
        for (int i = 0; i < n; i++) {
            index[stones[i]] = i;
        }

        vector<vector<bool>> dp(n, vector<bool>(n + 1, false));
        dp[0][0] = true;

        for (int i = 0; i < n; i++) {
            for (int k = 0; k <= n; k++) {
                if (dp[i][k]) {
                    for (int step = k - 1; step <= k + 1; step++) {
                        if (step > 0) {
                            int nextPos = stones[i] + step;
                            if (index.count(nextPos)) {
                                int j = index[nextPos];
                                dp[j][step] = true;
                            }
                        }
                    }
                }
            }
        }

        
        for (int k = 0; k <= n; k++) {
            if (dp[n - 1][k]) return true;
        }
        return false;
    }
};
