class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 0) {
            // Check the remainder when dividing by 3
            int remainder = n % 3;
            // If the remainder is greater than 1, it's not possible
            if (remainder > 1) {
                return false;
            }
            // Divide n by 3 for the next iteration
            n /= 3;
        }
        return true;
    }
};
