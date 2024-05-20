# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        def _minDepth(node):
            if node is None:
                return 0
            if node.left is None and node.right is None:
                return 1
            if node.left is None:
                return 1 + _minDepth(node.right)
            if node.right is None:
                return 1 + _minDepth(node.left)

            return min(_minDepth(node.left), _minDepth(node.right)) + 1

        return _minDepth(root)