class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        que = deque()
        y, x = len(grid), len(grid[0])

        for i in range(y):
            for j in range(x):
                if grid[i][j] == 2:
                    que.append((i, j))

        minute = -1
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        while que:
            current_length = len(que)
            for _ in range(current_length):
                current_y, current_x = que.popleft()
                for dy, dx in directions:
                    new_y, new_x = current_y + dy, current_x + dx

                    if 0 <= new_y < y and 0 <= new_x < x and grid[new_y][new_x] == 1:
                        grid[new_y][new_x] = 2
                        que.append((new_y, new_x))
            minute += 1
        return minute if all(1 not in inner for inner in grid) else -1