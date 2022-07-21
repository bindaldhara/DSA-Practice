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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) 
            return head;
        ListNode* p=head;
        ListNode* t;
        ListNode* p1=head;
        ListNode* t1;
        int c=1;
        while(c<left){
            t=p;
            p=p->next;
            c++;
        }
        c=1;
        while(c<right){
            t1=p1;
            p1=p1->next;
            c++;
        }
        
        t1=p1->next;
        int z=1;
        ListNode* p2=t1;
        ListNode* c1=p;
        ListNode* n;
        while(z<=right-left+1){
            n=c1->next;
            c1->next=p2;
            p2=c1;
            c1=n;
            z++;
        }
        if(left==1) return p2;
        t->next=p2;
        return head;
    }
};