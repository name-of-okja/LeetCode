
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        answer = [False] * len(candies)
        max_candy = max(candies)

        for i in range(len(candies)):
            if candies[i] + extraCandies >= max_candy:
                answer[i] = True

        return answer
