
class Solution:
    def numTilings(self, n: int) -> int:
        if n == 1:
            return 1
            
        mod = 10**9 + 7

        n += 1
        dp1 = [0] * n
        dp2 = [0] * n

        dp1[0] = 1
        dp1[1] = 1

        for i in range(2, n):
            dp1[i] = (dp1[i - 1] + dp1[i - 2] + 2 * dp2[i - 1]) % mod
            dp2[i] = (dp1[i - 2] + dp2[i - 1]) % mod

        return dp1[-1]