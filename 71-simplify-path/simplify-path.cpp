#include <stack>
#include <sstream>
#include <string>

class Solution {
public:
    std::string simplifyPath(std::string path) {
        std::stack<std::string> stack;
        
        std::stringstream ss(path);
        std::string token;
        
        // Process each part of the path separated by '/'
        while (std::getline(ss, token, '/')) {
            // Continue if the element is empty or a dot, which means stay in the current directory
            if (token == "" || token == ".") {
                continue;
            }
            
            // If element is a double dot, move up to the parent directory if possible
            if (token == "..") {
                // Only pop if the stack is not empty (cannot go above root)
                if (!stack.empty()) {
                    stack.pop();
                }
            } else {
                // Otherwise, it's a valid directory name; add to our list
                stack.push(token);
            }
        }
        
        // If directory stack is empty, we're at root
        if (stack.empty()) {
            return "/";
        }
        
        // Build the simplified path from the directory stack
        std::string result;
        while (!stack.empty()) {
            result = "/" + stack.top() + result;
            stack.pop();
        }
        
        return result;
    }
};
