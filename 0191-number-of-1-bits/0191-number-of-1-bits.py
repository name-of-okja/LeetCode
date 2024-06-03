class Solution:
    def hammingWeight(self, n: int) -> int:
        binary_string = bin(n)[2:]
        result = 0

        for b in binary_string:
            if b == "1":
                result += 1

        return result
