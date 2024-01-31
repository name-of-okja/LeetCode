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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *reverseList = nullptr;
        ListNode *pos = head;
        while (pos != nullptr)
        {
            ListNode *nextNode = pos->next;
            pos->next = reverseList;
            reverseList = pos;
            pos = nextNode;
        }

        return reverseList;
    }
};