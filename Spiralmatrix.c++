#include<bits/stdc++.h>

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        

        vector<int> ans;
 
  int n = mat.size(); 
  int m = mat[0].size(); 
    int top = 0, left = 0, bottom = n - 1, right = m - 1;

        while (top <= bottom && left <= right) {
      
    // For moving left to right
    for (int i = left; i <= right; i++)
      ans.push_back(mat[top][i]);

    top++;

    // For moving top to bottom.
    for (int i = top; i <= bottom; i++)
      ans.push_back(mat[i][right]);

    right--;
    
    // For moving right to left.
    if (top <= bottom) {
      for (int i = right; i >= left; i--)
       ans.push_back(mat[bottom][i]);

      bottom--;
    }
    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        ans.push_back(mat[i][left]);

      left++;
    }
  }
  return ans;
    }
};

// // Example for just making changes 
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         string temp = "", maxStr = "";
//         int k = 0;  // Start pointer
        
//         for (int i = 0; i < s.length(); i++) {
//             size_t found = temp.find(s[i]); // Check if s[i] exists in temp
            
//             if (found != string::npos) { // If duplicate found
//                 if (temp.length() > maxStr.length()) { 
//                     maxStr = temp; // Update max string
//                 }
//                 k++; // Move start index forward
//                 temp.clear();
//                 i = k - 1; // Restart checking from new start
//             } else {
//                 temp += s[i]; // Add character to temp
//             }
//         }

//         // Check one last time after loop ends
//         if (temp.length() > maxStr.length()) {
//             maxStr = temp;
//         }

//         return maxStr.length();
//     }
// };

