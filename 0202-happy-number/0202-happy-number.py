class Solution:
    def isHappy(self, n: int) -> bool:
        def square(n: int) -> int:
            result = 0

            while n > 0:
                total = n % 10
                result += pow(total, 2)
                n //= 10
            return result

        slow = square(n)
        fast = square(square(n))

        while slow != fast:
            slow = square(slow)
            fast = square(square(fast))

        return slow == 1


