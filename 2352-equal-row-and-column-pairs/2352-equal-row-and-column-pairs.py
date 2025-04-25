class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        n = len(grid)
        row_counter = Counter(tuple(row) for row in grid)
        col_counter = Counter(tuple(grid[i][j] for i in range(n)) for j in range(n))

        result = 0
        for row, r_count in row_counter.items():
            if row in col_counter:
                result += r_count * col_counter[row]

        return result