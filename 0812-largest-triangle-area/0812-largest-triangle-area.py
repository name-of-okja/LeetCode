class Solution:
    def largestTriangleArea(self, points: List[List[int]]) -> float:        
        def area(p, q, r):
            return 0.5 * abs(p[0]*q[1] + q[0]*r[1] + r[0]*p[1] - p[1]*q[0] - q[1]*r[0] - r[1]*p[0])
        
        max_area = 0
        n = len(points)
        for i in range(n):
            for j in range(i + 1, n):
                for k in range(j + 1, n):
                    max_area = max(max_area, area(points[i], points[j], points[k]))
        return max_area