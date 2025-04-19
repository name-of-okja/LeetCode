class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        current_high = 0
        max_high = 0
        for n in gain:
            current_high += n
            max_high = max(max_high, current_high)

        return max_high
