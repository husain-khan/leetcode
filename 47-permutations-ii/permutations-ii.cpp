class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<vector<int>> result;
        vector<bool> visited(nums.size(), false); // Track visited indices
        
        backtrack(result, nums, {}, visited);
        
        return result;
    }
    
    void backtrack(vector<vector<int>>& result, vector<int>& nums, vector<int> current, vector<bool>& visited) {
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            if (visited[i]) continue; // Skip if already used
            
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1] && !visited[i - 1]) continue;
            
            visited[i] = true; // Mark as used
            current.push_back(nums[i]);
            
            backtrack(result, nums, current, visited);
            
            visited[i] = false; // Reset for backtracking
            current.pop_back(); // Remove for backtracking
        }
    }
};
