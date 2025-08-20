class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int result = 0;

        // dp[i][j] = largest square with bottom-right corner at (i,j)
        vector<vector<int>> dp(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 1) {
                    if (i == 0 || j == 0) {
                        dp[i][j] = 1;  // edges can only form 1x1 squares
                    } else {
                        dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                    }
                    result += dp[i][j]; // add count of squares ending at (i,j)
                }
            }
        }

        return result;
    }
};
