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
        ListNode *head = NULL;
        ListNode *tail = NULL;
        int rem,carry=0;
        while(l1 != NULL || l2 != NULL)
        {
            if(l1 == NULL)
            {
                rem = (l2->val + carry)%10;
                carry = (l2->val + carry)/10;
            }
            else if(l2 == NULL)
            {
                rem = (l1->val + carry)%10;
                carry = (l1->val + carry)/10;
            }
            else
            {
                rem = (l1->val + l2->val + carry)%10;
                carry = (l1->val + l2->val + carry)/10;
            } 
            ListNode *newnode = new ListNode(rem);
            if(head == NULL)
                head = tail = newnode;
            else
            {
                tail->next = newnode;
                tail = newnode;
            }
            if(l1 != NULL)
            l1 = l1->next;
            if(l2 != NULL)
            l2 = l2->next;
        }
        if(carry != 0)
        {
            ListNode *newnode = new ListNode(carry);
            if(head == NULL)
                head = tail = newnode;
            
            else
            {
                tail->next = newnode;
                tail = newnode;
            }
        }
    return head;
    }
};