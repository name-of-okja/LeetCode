/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *pos = head, *before = head;
        while (n--)
        {
            pos = pos->next;
        }
        if (pos == nullptr)
        {
            head = head->next;
            delete before;
            return head;
        }
        while (pos->next != nullptr)
        {
            pos = pos->next;
            before = before->next;
        }

        ListNode *removeNode = before->next;

        before->next = removeNode->next;

        delete removeNode;

        return head;
    }
};