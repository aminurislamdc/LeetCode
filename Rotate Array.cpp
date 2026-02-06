#include <vector>
#include <algorithm>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; // Handle cases where k > n
        if (k == 0) return;

        // 1. Reverse the entire array
        std::reverse(nums.begin(), nums.end());
        
        // 2. Reverse the first k elements
        std::reverse(nums.begin(), nums.begin() + k);
        
        // 3. Reverse the rest of the elements
        std::reverse(nums.begin() + k, nums.end());
    }
};