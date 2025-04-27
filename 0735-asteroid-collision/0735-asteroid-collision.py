class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        st = []

        for a in asteroids:
            while st and a < 0 and st[-1] > 0:
                if st[-1] == -a:
                    st.pop()
                    break

                if st[-1] < -a:
                    st.pop()
                else:
                    break
            else:
                st.append(a)
        return st
