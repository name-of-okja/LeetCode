
class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        answer = []

        def backtraking(acc: List[int], current_sum: int, start: int):
            if len(acc) == k:
                if n == current_sum:
                    answer.append(acc.copy())
                return

            for i in range(start, 10):
                if current_sum + i > n:
                    break

                acc.append(i)
                backtraking(acc, current_sum + i, i + 1)
                acc.pop()

        backtraking([], 0, 1)
        return answer
