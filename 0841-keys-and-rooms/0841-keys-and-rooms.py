class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        board = [False] * len(rooms)

        board[0] = True
        que = deque(rooms[0])
        while que:
            key = que.popleft()

            if board[key]:
                continue

            board[key] = True
            que.extend(rooms[key])

        return all(board)
