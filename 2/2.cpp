class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = l1;
        int c = 0;
        while (l1->next && l2->next) {
            c += l1->val + l2->val;
            l1->val = c % 10;
            c /= 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        c += l1->val + l2->val;
        l1->val = c % 10;
        c /= 10;
        
        if (l2->next) {
            l1->next = l2->next;
        }
        
        while (l1->next) {
            l1 = l1->next;
            c += l1->val;
            l1->val = c % 10;
            c /= 10;
        }

        if (c) {
            l1->next = new ListNode(c);
        }
        
        return ans;
    }
};
