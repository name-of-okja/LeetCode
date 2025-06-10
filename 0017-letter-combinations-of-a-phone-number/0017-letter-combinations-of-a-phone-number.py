class Solution:
    def __init__(self):
        self.board = {
            "2": ["a", "b", "c"],
            "3": ["d", "e", "f"],
            "4": ["g", "h", "i"],
            "5": ["j", "k", "l"],
            "6": ["m", "n", "o"],
            "7": ["p", "q", "r", "s"],
            "8": ["t", "u", "v"],
            "9": ["w", "x", "y", "z"],
        }

    def letterCombinations(self, digits: str) -> List[str]:
        n = len(digits)
        answer = []
        if n == 0:
            return answer

        def backtracking(pos, acc):
            if pos == n:
                answer.append(acc)
                return

            for c in self.board[digits[pos]]:
                backtracking(pos + 1, acc + c)

        backtracking(0, "")

        return answer
