class Solution:
    def toGoatLatin(self, sentence: str) -> str:
        aeiou = set("aeiouAEIOU")
        words = sentence.split()

        for i in range(0, len(words)):
            word = words[i]
            if word[0] not in aeiou:
                word = word[1:] + word[0]

            word += "ma"
            word += (i + 1) * "a"

            words[i] = word

        return " ".join(words)
