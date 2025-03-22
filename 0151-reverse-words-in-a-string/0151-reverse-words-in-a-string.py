class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        l, r = 0, len(words) - 1

        while l < r:
            words[r], words[l] = words[l], words[r]

            l += 1
            r -= 1

        return " ".join(words)
