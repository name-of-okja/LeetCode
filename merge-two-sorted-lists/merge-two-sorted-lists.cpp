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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode temp(0);
        ListNode *pos = &temp;
        ListNode *list1Pos = list1;
        ListNode *list2Pos = list2;

        while (list1Pos != nullptr && list2Pos != nullptr)
        {
            if (list1Pos->val < list2Pos->val)
            {
                pos->next = list1Pos;
                list1Pos = list1Pos->next;
            }
            else
            {
                pos->next = list2Pos;
                list2Pos = list2Pos->next;
            }
            pos = pos->next;
        }

        if (list1Pos == nullptr)
            pos->next = list2Pos;
        else
            pos->next = list1Pos;

        return temp.next;
    }
};