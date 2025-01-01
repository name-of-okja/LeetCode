
class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        def check(num: int) -> bool:
            target = num
            while num:
                checkVal = num % 10
                num //= 10

                if checkVal == 0 or target % checkVal != 0:
                    return False

            return True

        answer = []

        for num in range(left, right + 1):
            if check(num):
                answer.append(num)

        return answer
