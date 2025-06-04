
class Solution:
    def successfulPairs(
        self, spells: List[int], potions: List[int], success: int
    ) -> List[int]:
        potions.sort()
        answer = []

        def binary_search(target):
            l, r = 0, len(potions)
            while l < r:
                m = (l + r) // 2
                if potions[m] < target:
                    l = m + 1
                else:
                    r = m
            return l

        for spell in spells:
            target = math.ceil(success / spell)
            idx = binary_search(target)
            answer.append(len(potions) - idx)

        return answer
