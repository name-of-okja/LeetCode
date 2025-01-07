class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        for s in letters:
            if target < s:
                return s

        return letters[0]