class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        board = [0] * (ord("z") - ord("A") + 1)
        anwser = 0

        for c in jewels:
            board[ord(c) - ord("A")] += 1

        for c in stones:
            anwser += board[ord(c) - ord("A")]

        return anwser
