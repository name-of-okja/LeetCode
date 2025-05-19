# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        que = deque([root])
        board = []
        while que:
            current_level_len = len(que)
            current_level_total_sum = 0
            for i in range(current_level_len):
                node = que.popleft()
                current_level_total_sum += node.val
                if node.left:
                    que.append(node.left)
                if node.right:
                    que.append(node.right)

            board.append(current_level_total_sum)

        return board.index(max(board)) + 1