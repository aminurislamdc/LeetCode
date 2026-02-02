#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        // Start from the second element (index 1)
        for (int i = 1; i < nums.size(); i++) {
            // Add the previous element's value to the current element
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};