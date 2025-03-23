class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        multi = math.prod(nums)

        return [
            multi // n if n != 0 else math.prod(nums[:i] + nums[i + 1 :])
            for i, n in enumerate(nums)
        ]