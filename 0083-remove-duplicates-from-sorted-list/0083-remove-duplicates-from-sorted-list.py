# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        v = set()
        curNode = head
        prevNode = head

        while(curNode is not None) :
            if curNode.val not in v:
                v.add(curNode.val)
                prevNode = curNode
            else:
                prevNode.next = curNode.next
           
            curNode = curNode.next        
        return head
            
            