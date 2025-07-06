class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        l = len(cost)
        if l == 2:
            return min(cost[0], cost[1])

        dp = [cost[0], cost[1]]

        for i in range(2, l):
            dp.append(cost[i] + min(dp[i - 1], dp[i - 2]))

        return min(dp[l - 1], dp[l - 2])
