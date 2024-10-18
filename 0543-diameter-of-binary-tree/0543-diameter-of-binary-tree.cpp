/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int _curMax = 0;

    int _diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int left = _diameterOfBinaryTree(root->left);
        int right = _diameterOfBinaryTree(root->right);
        _curMax = max(_curMax, left + right);

        return  max(left, right) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        _curMax = 0;
        _diameterOfBinaryTree(root);
        return _curMax;
    }
};