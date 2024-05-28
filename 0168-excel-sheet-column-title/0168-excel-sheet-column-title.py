class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        # A = 1 Z = 26
        result = ""

        while columnNumber > 0:
            columnNumber, rest = divmod(columnNumber - 1, 26)
            result += chr(65 + rest)

        return result[::-1]
        