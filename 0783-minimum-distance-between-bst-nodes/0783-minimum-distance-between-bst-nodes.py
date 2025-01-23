# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        def r(root: Optional[TreeNode]):
            if root is None:
                return

            r(root.left)
            li.append(root.val)
            r(root.right)

        li = []

        r(root)

        answer = float("+inf")
        for i in range(1, len(li)):
            if answer > li[i] - li[i - 1]:
                answer = li[i] - li[i - 1]

        return answer
