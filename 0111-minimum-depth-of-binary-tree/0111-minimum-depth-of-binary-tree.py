# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        def depth(node):
            if not node:
                return 0
            left, right = depth(node.left), depth(node.right)
            if right and left:
                return 1 + min(left, right)
            elif left:
                return 1 + left
            return 1 + right
        return depth(root)