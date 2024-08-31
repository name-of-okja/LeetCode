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
public:
    int sumOfLeftLeaves(TreeNode *root)
    {
        int result = 0;
        result += _sumOfLeftLeaves(root->left, true);
        result += _sumOfLeftLeaves(root->right, false);

        return result;
    }

private:
    int _sumOfLeftLeaves(TreeNode *root, bool isAdd)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int result = isAdd ? root->val : 0;
        result += _sumOfLeftLeaves(root->left, true);
        result += _sumOfLeftLeaves(root->right, false);

        return result;
    }
};