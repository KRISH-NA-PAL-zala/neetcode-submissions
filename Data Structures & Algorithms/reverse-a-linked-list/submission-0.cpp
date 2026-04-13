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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* nxt = head->next;
        ListNode* prv = nullptr;
        head->next = prv;
        while(nxt != nullptr){
            prv = head;
            head = nxt;
            nxt = nxt->next;
            head->next = prv;
        }
        return head;
        
    }
};
