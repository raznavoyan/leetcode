/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
        ListNode* n1 = head;
        ListNode* n2 = head->next;
        while (n2 != NULL && n2->next != NULL) {
            n1 = n1->next;
            n2 = n2->next->next; // Move n2 by two steps
            if (n1 == n2) {
                return true;
            }
        }
        return false;
    }
};
