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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        
        if (root == nullptr)
        {
            return result;
        }

        queue<TreeNode *> que;
        que.push(root);

        while (que.empty() == false)
        {
            vector<int> v;
            int size = que.size();

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = que.front();
                que.pop();

                if (node->left != nullptr)
                {
                    que.push(node->left);
                }
                if (node->right != nullptr)
                {
                    que.push(node->right);
                }

                v.push_back(node->val);
            }
            result.push_back(v);
        }
        return result;
    }
};