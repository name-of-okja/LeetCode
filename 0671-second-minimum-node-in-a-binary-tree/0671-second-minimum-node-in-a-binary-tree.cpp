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
    int findSecondMinimumValue(TreeNode *root)
    {
        int firstMin = root->val, secondMin = -1;
        _findSecondMinimumValue(root, firstMin, secondMin);

        return secondMin;
    }

private:
    void _findSecondMinimumValue(TreeNode *root, int &firstMin, int &secondMin)
    {
        if (root == nullptr)
            return;

        if (firstMin < root->val && (secondMin == -1 || secondMin > root->val))
            secondMin = root->val;

        if (root->left && root->val == firstMin)
            _findSecondMinimumValue(root->left, firstMin, secondMin);
        if (root->right && root->val == firstMin)
            _findSecondMinimumValue(root->right, firstMin, secondMin);
    }
};