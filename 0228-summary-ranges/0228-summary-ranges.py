class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if not nums:
            return []

        ranges = [[nums[0], nums[0] - 1]]

        for num in nums:
            if ranges[-1][1] == num - 1:
                ranges[-1][1] = num
            else:
                ranges.append([num, num])

        return [f"{x}->{y}" if x != y else f"{x}" for x, y in ranges]