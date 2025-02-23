class Solution:
    def binaryGap(self, n: int) -> int:
        binrary_string = bin(n)[2:]

        prev = None
        answer = 0
        for i, b in enumerate(binrary_string):
            if b == "1":
                if prev is not None:
                    answer = max(answer, i - prev)
                prev = i

        return answer
