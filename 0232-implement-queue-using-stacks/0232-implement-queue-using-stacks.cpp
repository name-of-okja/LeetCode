#include <stack>

using namespace std;

class MyQueue
{
public:
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s2.empty())
        {
            transferElements();
        }

        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek()
    {
        if (s2.empty())
        {
            transferElements();
        }
        return s2.top();
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }

private:
    stack<int> s1;
    stack<int> s2;

    void transferElements()
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */