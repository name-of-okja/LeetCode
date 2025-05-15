# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def longestZigZag(self, root: Optional[TreeNode]) -> int:
        self.answer = 0

        def dfs(node: Optional[TreeNode], is_left: bool, length):
            if not node:
                return
            self.answer = max(self.answer, length)

            if is_left:
                dfs(node.right, not is_left, length + 1)
                dfs(node.left, is_left, 1)
            else:
                dfs(node.left, not is_left, length + 1)
                dfs(node.right, is_left, 1)

        dfs(root.left, True, 1)
        dfs(root.right, False, 1)
        return self.answer
