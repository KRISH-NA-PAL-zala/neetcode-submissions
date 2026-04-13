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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode res(0);
        ListNode* curr = &res;
        while(l1 || l2 || c){
            int a = l1? l1->val: 0;
            int b = l2? l2->val: 0;
            curr->next = new ListNode((a + b + c) % 10);
            c = (a + b + c) / 10;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
            curr = curr->next;
        }
        return res.next;
    }
};
