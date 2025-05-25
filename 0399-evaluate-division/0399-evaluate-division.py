
class Solution:
    def calcEquation(
        self, equations: List[List[str]], values: List[float], queries: List[List[str]]
    ) -> List[float]:
        graph = defaultdict(list)
        answer = []
        for i in range(len(equations)):
            value = values[i]
            node1, node2 = equations[i]
            graph[node1].append((node2, value))
            graph[node2].append((node1, 1 / value))

        def dfs(
            current: str,
            target: str,
            visitied: List[str],
            acc: float,
        ) -> float:
            nonlocal graph
            if current == target:
                return acc
            visitied.append(current)
            for node, edge in graph[current]:
                if node not in visitied:
                    result = dfs(node, target, visitied, acc * edge)

                    if result != -1.0:
                        return result
            return -1.0

        for start, end in queries:
            if start not in graph or end not in graph:
                answer.append(-1.0)
                continue

            answer.append(dfs(start, end, [], 1))

        return answer
