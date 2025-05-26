class Solution:
    def nearestExit(self, maze: List[List[str]], entrance: List[int]) -> int:
        max_x, max_y = len(maze[0]) - 1, len(maze) - 1
        que = deque()
        start_y, start_x = entrance
        que.append((start_y, start_x, 0))

        maze[start_y][start_x] = "+"

        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

        while que:
            y, x, steps = que.popleft()

            for dy, dx in directions:
                new_y, new_x = y + dy, x + dx

                if (
                    0 <= new_y <= max_y
                    and 0 <= new_x <= max_x
                    and maze[new_y][new_x] == "."
                ):
                    if new_y == 0 or new_y == max_y or new_x == 0 or new_x == max_x:
                        return steps + 1

                    maze[new_y][new_x] = "+"
                    que.append((new_y, new_x, steps + 1))

        return -1