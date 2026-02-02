from typing import List

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        # Start iterating from the second element (index 1)
        for i in range(1, len(nums)):
            # Add the value of the previous element to the current one
            nums[i] += nums[i - 1]
        
        return nums