class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        a, b = (0, 1) if nums[0] > nums[1] else (1, 0)

        for i in range(2, len(nums)):
            if nums[b] < nums[i]:
                b = i
            if nums[a] < nums[b]:
                a, b = b, a

        return a if nums[a] >= nums[b] * 2 else -1
