
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l, r = 1, max(piles)

        def used_hour(k) -> int:
            hour = 0
            for pile in piles:
                hour += (pile + k - 1) // k
            return hour

        while l < r:
            m = l + (r - l) // 2
            hour = used_hour(m)
            if hour <= h:
                r = m
            else:
                l = m + 1

        return l