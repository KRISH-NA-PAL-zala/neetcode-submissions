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
        if(!head || !head->next) return;

        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = nullptr;
        ListNode* prv = nullptr;

        while(second){
            ListNode* nxt = second->next;
            second->next = prv;
            prv = second;
            second = nxt;
        }
        ListNode* first = head;
        second = prv;
        while(first && second){
            ListNode* first_nxt = first->next;
            ListNode* second_nxt = second->next;
            first->next = second;
            second->next = first_nxt;
            first = first_nxt;
            second = second_nxt;
        }
    }
};
