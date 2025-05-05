# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        if head is None or head.next is None:
            return head

        prev = None
        pos = head
        while pos is not None:
            temp = pos.next
            pos.next = prev
            prev = pos
            pos = temp

        return prev