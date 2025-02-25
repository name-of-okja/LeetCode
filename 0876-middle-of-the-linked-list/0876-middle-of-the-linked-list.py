# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        node = head
        fast_node = head

        while fast_node is not None and fast_node.next is not None:
            fast_node = fast_node.next.next
            node = node.next

        return node