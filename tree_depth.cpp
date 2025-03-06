class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Base case: If the tree is empty, there is no path sum
        if (root == nullptr) return false;
        
        // If this is a leaf node, check if its value equals the target sum
        if (root->left == nullptr && root->right == nullptr) {
            return root->val == targetSum;
        }
        
        // Recursively check the left and right subtrees with the updated target sum
        targetSum -= root->val;
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};
