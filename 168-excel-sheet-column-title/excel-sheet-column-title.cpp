class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string result;
        
        // Continue until columnNumber is reduced to 0
        while (columnNumber > 0) {
            // Adjust columnNumber to zero-indexed for modulo operation
            columnNumber--;
            
            // Calculate the character that corresponds to the current modulo of columnNumber
            char c = 'A' + columnNumber % 26;
            
            // Prepend the character to the result string
            result.insert(result.begin(), c);
            
            // Update columnNumber by dividing it by 26 for the next iteration
            columnNumber /= 26;
        }
        
        return result;
    }
};
