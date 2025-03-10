class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        n = len(nums)
        if n == 1 or n == 2:
            return True

        func = None
        i = 1
        while i < n and func is None:
            if nums[i] == nums[i - 1]:
                i += 1
                continue

            func = max if nums[i - 1] < nums[i] else min

        while i < n:
            if func(nums[i], nums[i - 1]) != nums[i]:
                return False
            i += 1

            
        return True
