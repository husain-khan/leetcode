#include <iostream>
#include <vector>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int count = 0;
        int left = 0;
        int sum = 0;

        for (int right = 0; right < nums.size(); ++right) {
            sum += nums[right]; // Expand the window

            // Shrink the window from the left if the sum is too large
            while (sum > k && left <= right) {
                sum -= nums[left];
                left++;
            }

            // Check if the current window's sum equals k
            if (sum == k) {
                count++;
            }
        }

        return count;
    }
};
