/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> m;
        Node* copyhead = head;
        Node* copy;

        while(head){
            copy = new Node(head->val);
            m[head] = copy;
            head = head->next;
        }

        for(auto ele: m){
            if(ele.first){
                ele.second->next = m[ele.first->next];
                ele.second->random = m[ele.first->random];
            }
        }

        return m[copyhead];
    }
};
