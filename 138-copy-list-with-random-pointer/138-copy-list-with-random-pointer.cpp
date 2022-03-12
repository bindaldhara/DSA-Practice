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
           if(!head) return NULL;
        Node* curr = head;
        while(curr){
            Node* temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;
        }
        curr = head;
        while(curr){
            curr->next->random = curr->random == NULL ? NULL : curr->random->next;
            curr = curr->next->next;
        }
        Node* copy = head->next;
        Node* main = head;
        curr = copy;
        while(main){
            main->next = main->next->next;
            copy->next = copy->next == NULL ? NULL : copy->next->next;
            main = main->next;
            copy = copy->next;
        }
       return curr;
    }
};