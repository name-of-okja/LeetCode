class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:

        def aggreate(data, c):
            page, mod = data
            width = widths[ord(c) - ord("a")]

            if mod + width > 100:
                return [page + 1, width]

            return [page, mod + width]

        return reduce(aggreate, s, [1, 0])
