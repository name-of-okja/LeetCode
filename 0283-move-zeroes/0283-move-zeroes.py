class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        write = 0
        for read in range(len(nums)):
            if nums[read] != 0:
                nums[read], nums[write] = nums[read], nums[write]
                write += 1