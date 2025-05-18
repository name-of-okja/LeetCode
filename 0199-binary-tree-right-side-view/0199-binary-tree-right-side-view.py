# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        answer = []

        if not root:
            return answer

        que = deque([root])

        while que:
            current_level_len = len(que)

            for i in range(current_level_len):
                node = que.popleft()

                if i == current_level_len - 1:
                    answer.append(node.val)

                if node.left:
                    que.append(node.left)

                if node.right:
                    que.append(node.right)
        return answer