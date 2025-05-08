# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        result = 0
        values = list()
        pos = head

        while pos:
            values.append(pos.val)
            pos = pos.next

        l = len(values)
        for i in range(l // 2):
            result = max(result, values[i] + values[l - i - 1])
        return result