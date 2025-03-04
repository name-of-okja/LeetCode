class Solution:
    def projectionArea(self, grid: List[List[int]]) -> int:

        top_view = sum(1 for row in grid for v in row if v > 0)

        side_view = sum(max(row) for row in grid)

        n = len(grid)
        front_view = sum(max(grid[i][j] for i in range(n)) for j in range(n))
        
        return top_view + side_view + front_view
