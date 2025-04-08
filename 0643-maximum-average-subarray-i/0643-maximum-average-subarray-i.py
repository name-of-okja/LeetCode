class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        temp = sum(nums[0:k])
        answer = temp

        for i in range(k, len(nums)):
            temp -= nums[i - k]
            temp += nums[i]
            answer = max(answer, temp)

        return answer / k
