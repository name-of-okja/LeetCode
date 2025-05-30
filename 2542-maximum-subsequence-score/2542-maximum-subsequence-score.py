class Solution:
    def maxScore(self, nums1: List[int], nums2: List[int], k: int) -> int:
        paired_list = list(zip(nums1, nums2))
        sorted_paired_list = sorted(paired_list, key=lambda pair: pair[1], reverse=True)

        n = len(sorted_paired_list)
        pos = k
        total_sum = sum(pair[0] for pair in sorted_paired_list[:k])
        max_result = total_sum * sorted_paired_list[k - 1][1]
        while pos < n:
            total_sum += sorted_paired_list[pos][0]
            total_sum -= sorted_paired_list[pos - k][0]
            max_result = max(max_result, total_sum * sorted_paired_list[pos][1])
            pos += 1
        return max_result