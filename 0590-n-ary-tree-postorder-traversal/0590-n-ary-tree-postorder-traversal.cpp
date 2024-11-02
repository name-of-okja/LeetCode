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
    void _postorder(Node *root, vector<int> *v)
    {
        if (root == nullptr)
        {
            return;
        }

        for (Node *c : root->children)
        {
            _postorder(c, v);
        }

        v->push_back(root->val);
    }

public:
    vector<int> postorder(Node *root)
    {
        vector<int> v;
        _postorder(root, &v);

        return v;
    }
};
