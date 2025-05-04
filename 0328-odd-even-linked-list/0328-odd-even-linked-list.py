# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return None
        if head.next is None:
            return head

        flag = True
        pos = head
        odd = ListNode(0)
        even = ListNode(0)
        evenHead = even

        while pos:
            if flag:
                odd.next = pos
                odd = pos
            else:
                even.next = pos
                even = pos

            pos = pos.next
            flag = not flag
        even.next = None
        odd.next = evenHead.next
        return head