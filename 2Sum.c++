#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int index = -1, indey = -1;
        int len = nums.size(); 
        for(int i = 0; i < len; i++) {
            for(int j = i + 1; j < len; j++) { 
                if(nums[i] + nums[j] == target) {
                    index = i;
                    indey = j;
                    return {index, indey}; 
                }
            }
        }
        
        return {}; 
    }
};
