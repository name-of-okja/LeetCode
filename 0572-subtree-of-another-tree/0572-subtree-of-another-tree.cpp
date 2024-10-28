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
class Solution
{
private:
    bool _isSubTree(TreeNode *root, TreeNode *subRoot)
    {
        if (root == nullptr && subRoot == nullptr)
        {
            return true;
        }
        if (root == nullptr || subRoot == nullptr)
        {
            return false;
        }
        if (root->val != subRoot->val)
        {
            return false;
        }
        if (!_isSubTree(root->left, subRoot->left))
        {
            return false;
        }
        if (!_isSubTree(root->right, subRoot->right))
        {
            return false;
        }

        return true;
    }

public:
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        if (root == nullptr)
        {
            return false;
        }

        if (_isSubTree(root, subRoot))
        {
            return true;
        }

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};