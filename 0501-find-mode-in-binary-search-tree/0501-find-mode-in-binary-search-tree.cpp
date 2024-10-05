class Solution
{
public:
    vector<int> findMode(TreeNode *root)
    {
        queue<TreeNode *> q;
        unordered_map<int, int> m;
        vector<int> result;

        q.push(root);

        int maxCount = 0;
        while (q.empty() == false)
        {
            TreeNode *cur = q.front();
            q.pop();

            ++m[cur->val];

            if (m[cur->val] > maxCount)
                maxCount = m[cur->val];

            if (cur->left != nullptr)
                q.push(cur->left);
            if (cur->right != nullptr)
                q.push(cur->right);
        }

        for (auto pair : m)
        {
            if (pair.second == maxCount)
            {
                result.push_back(pair.first);
            }
        }

        return result;
    }
};