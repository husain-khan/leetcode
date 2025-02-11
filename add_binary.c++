#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string result = "";
        int i = a.length() - 1; // index for string a
        int j = b.length() - 1; // index for string b
        int carry = 0;

        // Iterate from right to left
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0'; // Convert char to integer
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to integer
                j--;
            }

            result += (sum % 2) + '0'; // Add bit to result
            carry = sum / 2; // Calculate new carry
        }

        // Reverse the string to get the correct order
        std::reverse(result.begin(), result.end());
        
        return result; // Return the final binary sum
    }
};

int main() {
    Solution solution;
    std::string a = "1010";
    std::string b = "1011";
    
    std::string sum = solution.addBinary(a, b);
    
    std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl; // Expected Output: 10101

    return 0;
}
