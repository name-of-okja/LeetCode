class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        n = len(senate)
        r_que = deque()
        d_que = deque()

        for i, c in enumerate(senate):
            if c == "R":
                r_que.append(i)
            else:
                d_que.append(i)

        while r_que and d_que:
            r = r_que.popleft()
            d = d_que.popleft()

            if r < d:
                r_que.append(r + n)
            else:
                # D가 R을 제거
                d_que.append(d + n)

        return "Radiant" if r_que else "Dire"
