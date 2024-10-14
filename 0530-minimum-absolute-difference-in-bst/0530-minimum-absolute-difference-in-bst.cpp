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
    int getMinimumDifference(TreeNode *root)
    {
        vector<int> v;
        int m = INT_MAX;

        _r(root, v);

        for (int i = 1; i < v.size(); ++i)
        {
            int diff = v[i] - v[i - 1];
            if (m > diff)
            {
                m = diff;
            }
        }

        return m;
    }

private:
    void _r(TreeNode *node, vector<int> &v)
    {
        if (node == nullptr)
        {
            return;
        }

        _r(node->left, v);
        v.emplace_back(node->val);
        _r(node->right, v);
    }
};
