
class Solution:
    def totalCost(self, costs: List[int], k: int, candidates: int) -> int:
        n = len(costs)
        total = 0
        left = 0
        right = n - 1
        leftHeap = []
        rightHeap = []

        for _ in range(candidates):
            if left <= right:
                heapq.heappush(leftHeap, (costs[left], left))
                left += 1

        for _ in range(candidates):
            if left <= right:
                heapq.heappush(rightHeap, (costs[right], right))
                right -= 1

        for _ in range(k):
            if leftHeap and rightHeap:
                if leftHeap[0][0] < rightHeap[0][0] or (
                    leftHeap[0][0] == rightHeap[0][0]
                    and leftHeap[0][1] < rightHeap[0][1]
                ):
                    cost, _ = heapq.heappop(leftHeap)
                    if left <= right:
                        heapq.heappush(leftHeap, (costs[left], left))
                        left += 1
                else:
                    cost, _ = heapq.heappop(rightHeap)
                    if left <= right:
                        heapq.heappush(rightHeap, (costs[right], right))
                        right -= 1
            elif leftHeap:
                cost, _ = heapq.heappop(leftHeap)
                if left <= right:
                    heapq.heappush(leftHeap, (costs[left], left))
                    left += 1
            else:
                cost, _ = heapq.heappop(rightHeap)
                if left <= right:
                    heapq.heappush(rightHeap, (costs[right], right))
                    right -= 1
            total += cost

        return total
