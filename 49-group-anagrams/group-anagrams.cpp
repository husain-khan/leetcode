#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagrams;
        
        // Iterate through each string in the input array
        for (const auto& s : strs) {
            // Create a copy of the string to sort
            std::string sortedStr = s;
            
            // Sort the characters in the string
            std::sort(sortedStr.begin(), sortedStr.end());
            
            // Use the sorted string as a key in the map
            anagrams[sortedStr].push_back(s);
        }
        
        // Convert the map values into a vector of vectors
        std::vector<std::vector<std::string>> result;
        for (const auto& pair : anagrams) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};
