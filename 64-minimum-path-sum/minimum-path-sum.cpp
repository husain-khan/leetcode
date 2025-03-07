class Solution {
public:
    int minPathSum(std::vector<std::vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        std::vector<int> dp(n, 0);
        
        dp[0] = grid[0][0];
        
        // Initialize the first row
        for (int j = 1; j < n; ++j) {
            dp[j] = dp[j - 1] + grid[0][j];
        }
        
        // Fill the rest of the dp array
        for (int i = 1; i < m; ++i) {
            dp[0] += grid[i][0];
            for (int j = 1; j < n; ++j) {
                dp[j] = std::min(dp[j - 1], dp[j]) + grid[i][j];
            }
        }
        
        return dp[n - 1];
    }
};
