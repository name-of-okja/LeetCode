class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        n = len(nums)
        read, write = 0, 0
        while write < n and read < n:
            if nums[write] != 0:
                write += 1
            elif read <= write:
                read = write + 1
            elif nums[read] == 0:
                read += 1
            else:
                nums[read], nums[write] = nums[write], nums[read]