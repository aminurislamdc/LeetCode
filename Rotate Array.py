class Solution:
    def rotate(self, nums: list[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k %= n  # Handle cases where k > n
        
        # Helper function to reverse a portion of the array
        def reverse(start, end):
            while start < end:
                nums[start], nums[end] = nums[end], nums[start]
                start += 1
                end -= 1
        
        # 1. Reverse the entire array
        # [1,2,3,4,5,6,7] -> [7,6,5,4,3,2,1]
        reverse(0, n - 1)
        
        # 2. Reverse the first k elements
        # [7,6,5, 4,3,2,1] -> [5,6,7, 4,3,2,1]
        reverse(0, k - 1)
        
        # 3. Reverse the rest
        # [5,6,7, 4,3,2,1] -> [5,6,7, 1,2,3,4]
        reverse(k, n - 1)