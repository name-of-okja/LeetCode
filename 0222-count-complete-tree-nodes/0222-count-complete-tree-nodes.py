# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def countNodes(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        val = 1
        val += self.countNodes(root.left)
        val += self.countNodes(root.right)
        return val