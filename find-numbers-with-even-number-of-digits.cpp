class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num : nums) {
            // Check specific ranges for 2, 4, or 6 digits
            if ((num >= 10 && num <= 99) || 
                (num >= 1000 && num <= 9999) || 
                (num == 100000)) {
                count++;
            }
        }
        return count;
    }
};