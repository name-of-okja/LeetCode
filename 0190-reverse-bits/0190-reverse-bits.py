class Solution:
    def reverseBits(self, n: int) -> int:
        result = 0

        for _ in range(32):
            lastBit = n & 1

            # 최하위 bit 삭제
            n >> 1

            # 한칸씩 앞으로 떙기기
            result = result << 1
            # 맨마지막에 대입
            result = result | lastBit

        return result
