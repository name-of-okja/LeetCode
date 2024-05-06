class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.rstrip()
        n = 0
        for i in range(len(s) - 1, -1, -1):
            if s[i] == ' ':
                break
            else:
                n += 1

        return n