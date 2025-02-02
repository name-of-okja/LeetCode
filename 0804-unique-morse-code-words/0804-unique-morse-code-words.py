
class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        mos = [
            ".-",
            "-...",
            "-.-.",
            "-..",
            ".",
            "..-.",
            "--.",
            "....",
            "..",
            ".---",
            "-.-",
            ".-..",
            "--",
            "-.",
            "---",
            ".--.",
            "--.-",
            ".-.",
            "...",
            "-",
            "..-",
            "...-",
            ".--",
            "-..-",
            "-.--",
            "--..",
        ]

        s = {"".join(mos[ord(c) - ord("a")] for c in word) for word in words}

        return len(s)
