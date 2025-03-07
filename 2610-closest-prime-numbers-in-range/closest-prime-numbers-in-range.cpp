#include <vector>

class Solution {
public:
    std::vector<int> closestPrimes(int left, int right) {
        std::vector<bool> st(right + 1, false);
        std::vector<int> prime;
        
        // Generate prime numbers using Sieve of Eratosthenes
        for (int i = 2; i <= right; ++i) {
            if (!st[i]) {
                prime.push_back(i);
                for (long long j = (long long)i * i; j <= right; j += i) {
                    st[j] = true;
                }
            }
        }
        
        // Filter primes in range
        std::vector<int> p;
        for (int num : prime) {
            if (left <= num && num <= right) {
                p.push_back(num);
            }
        }
        
        // If less than two primes in range, return [-1, -1]
        if (p.size() < 2) {
            return {-1, -1};
        }
        
        // Find the minimum prime gap
        int minDiff = INT_MAX;
        std::vector<int> ans = {-1, -1};
        for (int i = 0; i < p.size() - 1; ++i) {
            int diff = p[i + 1] - p[i];
            if (diff < minDiff) {
                minDiff = diff;
                ans = {p[i], p[i + 1]};
            }
        }
        
        return ans;
    }
};
