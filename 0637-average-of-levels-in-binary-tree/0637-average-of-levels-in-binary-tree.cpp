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
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> result;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int cnt = q.size();
            double sumV = 0;

            for (int i = 0; i < cnt; ++i)
            {
                TreeNode *f = q.front();
                sumV += f->val;

                if (f->left != nullptr)
                {

                    q.push(f->left);
                }
                if (f->right != nullptr)
                {
                    q.push(f->right);
                }

                q.pop();
            }
            result.push_back(sumV / cnt);
        }

        return result;
    }
};