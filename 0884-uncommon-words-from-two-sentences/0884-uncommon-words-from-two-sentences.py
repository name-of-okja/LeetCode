class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        words = s1.split() + s2.split()
        board = {}

        for w in words:
            board[w] = board.get(w, 0) + 1

        return [w for w in board if board[w] == 1]