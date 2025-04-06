class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        dic = defaultdict(int)
        answer = 0
        for n in nums:
            diff = k - n

            if dic.get(diff, 0) > 0:
                answer += 1
                dic[diff] -= 1
            else:
                dic[n] += 1

        return answer