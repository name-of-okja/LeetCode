# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def tree_to_list(root: Optional[TreeNode]):
            if root is None:
                return []
            if root.left is None and root.right is None:
                return [root.val]

            return tree_to_list(root.left) + tree_to_list(root.right)

        root1_list = tree_to_list(root1)
        root2_list = tree_to_list(root2)

        return root1_list == root2_list

