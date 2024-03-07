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
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        queue<TreeNode *> que;
        que.push(root);

        while (!que.empty())
        {
            auto pos = que.front();
            que.pop();

            if (pos->val == val)
            {
                return pos;
            }

            if (pos->left != nullptr)
            {
                que.push(pos->left);
            }
            if (pos->right != nullptr)
            {
                que.push(pos->right);
            }
        }

        return nullptr;
    }
};