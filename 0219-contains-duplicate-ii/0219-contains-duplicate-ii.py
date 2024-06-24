class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        m = {}

        for i, num in enumerate(nums):
            if num in m and abs(i - m[num]) <= k:
                return True

            m[num] = i

        return False
