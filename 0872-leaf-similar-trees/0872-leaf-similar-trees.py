# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def func(node: TreeNode):
            if not node.left and not node.right:
                yield node.val

            if node.left:
                yield from func(node.left)
            if node.right:
                yield from func(node.right)

        if not root1 or not root2:
            return False

        root1_leaf = list(func(root1))
        root2_leaf = list(func(root2))

        return root1_leaf == root2_leaf