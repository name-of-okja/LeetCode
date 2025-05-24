class Solution:
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        answer = 0
        graph = defaultdict(list)

        for node, edge in connections:
            graph[node].append((edge, 1))
            graph[edge].append((node, 0))

        visited = [False] * n

        def dfs(node):
            nonlocal answer
            visited[node] = True

            for next_node, is_original in graph[node]:
                if not visited[next_node]:
                    if is_original:
                        answer += 1
                    dfs(next_node)

        dfs(0)

        return answer