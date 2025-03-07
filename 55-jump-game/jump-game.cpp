class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int maxReach = 0; // Maximum reachable position
        
        for (int i = 0; i < nums.size(); ++i) {
            // If we cannot reach this position, return false
            if (i > maxReach) {
                return false;
            }
            
            // Update the maximum reachable position
            maxReach = std::max(maxReach, i + nums[i]);
        }
        
        return true; // We can reach the last index
    }
};
