class Solution:
    def surfaceArea(self, grid: List[List[int]]) -> int:
        n = len(grid)
        answer = 0

        for i in range(n):
            for j in range(n):
                if grid[i][j] > 0:
                    answer += 2

                # 동서남북
                for y, x in [(0, -1), (-1, 0), (0, 1), (1, 0)]:
                    iy, jx = i + y, j + x
                    if 0 <= iy < n and 0 <= jx < n:
                        answer += max(grid[i][j] - grid[iy][jx], 0)
                    else:
                        answer += grid[i][j]

        return answer
