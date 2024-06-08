class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        dumy = ListNode(next=head)
        prev = dumy
        pos = head

        while pos is not None:
            if pos.val == val:
                prev.next = pos.next
                pos = prev.next
            else:
                temp = pos
                prev = pos
                pos = temp.next

        return dumy.next