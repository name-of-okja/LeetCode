class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        length = len(s)
        answer = [0] * length

        # 오른쪽 하고 차이
        prev_idx = float("-inf")
        for i in range(length):
            if s[i] == c:
                prev_idx = i

            answer[i] = i - prev_idx

        # 왼쪽 하고 차이
        next_idx = float("+inf")
        for i in range(length - 1, -1, -1):
            if s[i] == c:
                next_idx = i

            answer[i] = min(answer[i], next_idx - i)

        return answer
