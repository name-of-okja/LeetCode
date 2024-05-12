class Solution:
    def mySqrt(self, x: int) -> int:
        l, r = 0, x
        while l <= r:
            m = l + ((r - l) // 2)
            if m * m  < x:
                l = m + 1
            elif m * m > x:
                r = m - 1
            else:
                return m
        # while 이 끝나면 r < l 이기 때문에
        return r