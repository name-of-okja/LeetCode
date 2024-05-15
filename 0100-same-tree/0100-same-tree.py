# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if not p or not q:
            return p == q
        if p.val != q.val:
            return False
        if self.isSameTree(p.left, q.left) == False:
            return False
        if self.isSameTree(p.right, p.right) == False:
            return False
        return True
