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
    int result = 0;
    int depthfirstsearch(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        int left = depthfirstsearch(root->left);
        int right = depthfirstsearch(root->right);

        result += abs(right - left);
        return right + left + root->val;
    }
    int findTilt(TreeNode *root)
    {
        result = 0;
        if (root)
            depthfirstsearch(root);
        return result;
    }
};