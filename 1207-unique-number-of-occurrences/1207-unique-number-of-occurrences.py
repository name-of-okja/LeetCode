class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        board = dict()
        for n in arr:
            board[n] = board.get(n, 0) + 1

        return len(set(board.values())) == len(set(arr))
