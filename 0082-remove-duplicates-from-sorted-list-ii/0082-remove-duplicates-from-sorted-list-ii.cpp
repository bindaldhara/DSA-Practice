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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) 
            return head;
        
        ListNode* dummy = new ListNode();
        ListNode* curEnd = dummy;
        int curVal = head->val + 1;
        int curDuplicate = 0;
        while(head) {
            curDuplicate = (head->val == curVal);
            curVal = head->val;
            if(!curDuplicate && (!head->next || head->next->val != curVal)) {
                curEnd->next = head;
                curEnd = head;
            }
            head = head->next;
            curEnd->next = NULL;
        }
        return dummy->next;
    }
};

