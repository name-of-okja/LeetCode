class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i = 0
        for c in s:
            is_pass = False

            while i < len(t):
                if t[i] == c:
                    is_pass = True
                    i += 1
                    break
                i += 1

            if not is_pass:
                return False

        return True
