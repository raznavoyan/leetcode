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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* res = head;
        ListNode* tmp = head->next;
        int sum = 0;
        while(tmp != nullptr){
            if(0 == tmp->val){
                res->next = tmp;
                res = tmp;
                res->val = sum;
                sum = 0; 
            }else{
                sum += tmp->val;
            }
            tmp = tmp->next;
        }
        res->next = nullptr;
        return head->next;
    }
};
