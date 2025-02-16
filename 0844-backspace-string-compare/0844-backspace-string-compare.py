class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def skip(z: str) -> str:
            st = []
            for i in range(len(z)):
                if z[i] == "#" and len(st) > 0:
                    st.pop()
                else:
                    st.append(z[i])
            return "".join(st)

        st = skip(s)
        tt = skip(t)

        return st == tt
