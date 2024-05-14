# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
    
        def _inorderTraversal(node: Optional[TreeNode]):
            if node is None:
                return
            
            _inorderTraversal(node.left)
            result.append(node.val)
            _inorderTraversal(node.right)
        
        _inorderTraversal(root)
        return result