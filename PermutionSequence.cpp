class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;  // Available numbers
        int fact = 1;      // Factorial value
        string result = "";

        // Fill numbers 1 to n and compute (n-1)!
        for (int i = 1; i <= n; i++) {
            nums.push_back(i);
            fact *= i;
        }
        
        k--;  // Convert k to 0-based index

        // Construct permutation
        for (int i = 0; i < n; i++) {
            fact /= (n - i);  // Update factorial
            int index = k / fact;
            result += to_string(nums[index]);  // Pick the digit
            
            nums.erase(nums.begin() + index);  // Remove used digit
            k %= fact;  // Update k for the next position
        }

        return result;
    }
};
