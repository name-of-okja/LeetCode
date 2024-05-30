class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        result = 0
        idx = 0
        for c in reversed(columnTitle):
            val = ord(c) - 65 + 1
            result += val * 26**idx
            idx += 1

        return result
