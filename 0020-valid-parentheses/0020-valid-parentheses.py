class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        bracket_map = {')': '(', '}': '{', ']': '['}

        for c in s:
            if c in bracket_map.values():
                st.append(c)
            else:
                if st and st[-1] == bracket_map[c]:
                    st.pop()
                else:
                    return False

        return len(st) == 0