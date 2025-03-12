class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        l1, l2 = len(word1), len(word2)
        n = max(l1, l2)

        answer = []

        for i in range(n):
            if i < l1:
                answer.append(word1[i])

            if i < l2:
                answer.append(word2[i])

        return "".join(answer)
