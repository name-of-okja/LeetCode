class Solution:
    def isToeplitzMatrix(self, matrix: List[List[int]]) -> bool:
        width = len(matrix[0])
        height = len(matrix)

        if height == 1 or width == 1:
            return True

        for x in range(0, width):
            v = matrix[0][x]
            for y in range(0, height):
                if x == width or y == height:
                    break

                if v != matrix[y][x]:
                    return False

                x += 1

        for y in range(1, height):
            v = matrix[y][0]
            for x in range(0, width):
                if x == width or y == height:
                    break

                if v != matrix[y][x]:
                    return False

                y += 1

        return True