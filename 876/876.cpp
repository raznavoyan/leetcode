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
    ListNode* middleNode(ListNode* head) {
        ListNode* n1= head;
        ListNode* n2= head;
        while(n2 != nullptr && n2->next!= nullptr) {
            n1 = n1->next ;
            n2 = n2->next->next;
        } 
        if(n2 = nullptr) 
            n1 = n1->next ;
        return n1;
     }
    

};
