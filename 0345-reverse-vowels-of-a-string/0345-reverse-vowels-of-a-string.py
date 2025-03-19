
class Solution:
    def reverseVowels(self, s: str) -> str:
        aeiou = set("aeiouAEIOU")
        i, j = 0, len(s) - 1

        answer = list(s)
        while i < j:
            if answer[i] not in aeiou:
                i += 1

            elif answer[j] not in aeiou:
                j -= 1

            else:
                answer[i], answer[j] = answer[j], answer[i]
                i += 1
                j -= 1

        return "".join(answer)