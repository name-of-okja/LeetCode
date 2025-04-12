class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        aeiou = set("aeiou")
        count = sum(1 for c in s[:k] if c in aeiou)
        answer = count

        for i in range(k, len(s)):
            if s[i - k] in aeiou:
                count -= 1
            if s[i] in aeiou:
                count += 1
            answer = max(answer, count)

        return answer
