# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0

        if root.left is None and root.right is None:
            return 1
            
        # float('inf')는 무한대 즉 최댓값
        left = self.minDepth(root.left) if root.left else float('inf')
        right = self.minDepth(root.right) if root.right else float('inf')

        return min(left,right) + 1