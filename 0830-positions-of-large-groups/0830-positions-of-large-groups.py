class Solution:
    def largeGroupPositions(self, s: str) -> List[List[int]]:
        answer = []
        count = 1
        for i in range(1, len(s)):
            if s[i] != s[i - 1]:
                if count >= 3:
                    answer.append([i - count, i - 1])
                count = 1
            else:
                count += 1

        if count >= 3:
            answer.append([len(s) - count, len(s) - 1])

        return answer