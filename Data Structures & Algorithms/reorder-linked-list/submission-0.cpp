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
    void reorderList(ListNode* head) {
        if(!head) return;
        if(!head->next) return;
        if(!head->next->next) return;
        while(head->next && head->next->next){
            ListNode* nxt = head;
            while(nxt->next->next){
                nxt = nxt->next;
            }
            ListNode* temp = head->next;
            head->next = nxt->next;
            nxt->next->next = temp;
            nxt->next = nullptr;
            head = temp;
        }
    }
};
