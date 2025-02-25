/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
private:
    void _preorder(Node *root, vector<int> *v)
    {
        if (root == nullptr)
        {
            return;
        }

        v->push_back(root->val);

        for (Node *c : root->children)
        {
            _preorder(c, v);
        }
    }

public:
    vector<int> preorder(Node *root)
    {
        vector<int> v;
        _preorder(root, &v);

        return v;
    }
};
