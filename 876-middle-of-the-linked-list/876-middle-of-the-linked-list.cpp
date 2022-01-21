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
        ListNode* curr = head;
           int index = 0;
            while(curr!=NULL){
               curr = curr->next;
                index++; //list length
                }
              for(int i = 0; i < index/2; i++){
                    head = head->next;
                     }
             return head;
               }
            
};