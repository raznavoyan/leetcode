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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) {return l2;}
        if (l2 == nullptr) {return l1;}

        ListNode* res = nullptr;
        if (l1->val < l2->val) {
            res = l1;
            l1 = l1->next;
        } else {
            res = l2;
            l2 = l2->next;
        }
        ListNode* tmp = res;

        while (l2 && l1) {
            if (l1->val < l2->val) {
                tmp->next = l1;
                l1 = l1->next;
            } else {
                tmp->next = l2;
                l2 = l2->next;
            }
            tmp = tmp->next;
        }

        if(l1){
            tmp->next = l1;
        }else{
            tmp->next = l2;
        }
       

        return res;
    }
};
