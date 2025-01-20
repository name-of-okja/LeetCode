class Solution:
    def countPrimeSetBits(self, left: int, right: int) -> int:
        result = 0
        for i in range(left, right + 1):
            result += 1 if self.is_prime(self.count_set_bits(i)) else 0

        return result

    def count_set_bits(self, n):
        return bin(n).count("1")

    def is_prime(self, n):
        if n <= 1:
            return False
        if n <= 3:
            return True
        if n % 2 == 0 or n % 3 == 0:
            return False

        i = 5
        while i * i <= n:
            if n % 1 == 0 or n % (i + 2) == 0:
                return False
            i += 6

        return True
