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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *current = dummy;
        int over = 0;

        while (l1 != nullptr || l2 != nullptr || over != 0)
        {
            int l1Val = l1 != nullptr ? l1->val : 0;
            int l2Val = l2 != nullptr ? l2->val : 0;

            int sum = l1Val + l2Val + over;
            int result = sum % 10;
            over = sum / 10;

            ListNode *node = new ListNode(result);
            current->next = node;
            current = current->next;

            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
        }

        ListNode *result = dummy->next;
        delete dummy;

        return result;
    }
};