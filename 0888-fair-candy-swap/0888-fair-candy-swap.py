class Solution:
    def fairCandySwap(self, aliceSizes: List[int], bobSizes: List[int]) -> List[int]:
        diff = (sum(aliceSizes) - sum(bobSizes)) // 2
        bob_set = set(bobSizes)

        for size in aliceSizes:
            if size - diff in bob_set:
                return [size, size - diff]
        return []
