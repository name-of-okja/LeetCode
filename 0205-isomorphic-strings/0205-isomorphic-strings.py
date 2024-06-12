class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        s_array = [0] * 200
        t_array = [0] * 200

        for i in range(1, len(s)):
            if s_array[ord(s[i])] != t_array[ord(t[i])]:
                return False

            s_array[ord(s[i])] = i + 1
            t_array[ord(t[i])] = i + 1

        return True