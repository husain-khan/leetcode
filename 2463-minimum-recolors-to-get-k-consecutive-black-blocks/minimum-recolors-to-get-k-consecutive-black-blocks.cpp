class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        // Count the number of white blocks in the first 'k' block segment
        int whiteBlockCount = count(blocks.begin(), blocks.begin() + k, 'W');
        
        // The minimum recolors needed is initially set to the number
        // of white blocks in the first window of size 'k'
        int minRecolors = whiteBlockCount;

        // Iterate over the blocks starting from the 'k'th block
        for (int i = k; i < blocks.size(); ++i) {
            // Increase whiteBlockCount if the current block is white
            whiteBlockCount += blocks[i] == 'W';
            
            // Decrease whiteBlockCount if the leftmost block of
            // the previous window was white
            whiteBlockCount -= blocks[i - k] == 'W';
            
            // Update minRecolors to the smallest number of white blocks
            // seen in any window of size 'k'
            minRecolors = min(minRecolors, whiteBlockCount);
        }

        // Return the minimum number of recolors needed
        return minRecolors;
    }
};
