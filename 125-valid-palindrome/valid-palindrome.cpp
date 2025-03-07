#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        // Clean the string by removing non-alphanumeric characters and converting to lowercase
        std::string cleaned;
        for (char c : s) {
            if (std::isalnum(c)) {
                cleaned += std::tolower(c);
            }
        }
        
        // Compare the cleaned string forward and backward
        int left = 0, right = cleaned.size() - 1;
        while (left < right) {
            if (cleaned[left] != cleaned[right]) {
                return false;
            }
            ++left;
            --right;
        }
        
        return true;
    }
};
