# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        result = 0

        def dfs(node: Optional[TreeNode], prev_max: int):
            nonlocal result

            if not node:
                return

            if node.val >= prev_max:
                result += 1

            dfs(node.left, max(prev_max, node.val))
            dfs(node.right, max(prev_max, node.val))

        dfs(root, float("-inf"))
        return result
