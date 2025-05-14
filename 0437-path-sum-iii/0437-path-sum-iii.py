# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
        self.result = 0

        def dfs(node: Optional[TreeNode]):
            if not node:
                return
            dfs_process(node, 0)

            dfs(node.left)
            dfs(node.right)

        def dfs_process(node: Optional[TreeNode], path_sum: int):
            if not node:
                return

            current_sum = path_sum + node.val
            if targetSum == current_sum:
                self.result += 1

            dfs_process(node.left, current_sum)
            dfs_process(node.right, current_sum)

        dfs(root)
        return self.result