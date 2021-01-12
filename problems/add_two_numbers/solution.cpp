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
        int r=0,temp=0,rem=0;
        ListNode* dummy = new ListNode(-1);
        ListNode* l3 = dummy;
        while(l1!=nullptr&&l2!=nullptr){
            temp = l1->val+l2->val+r;
            if(temp>=10){
                r = temp/10;
                rem=temp%10;
                dummy->next = new ListNode(rem);
            }
            else{
                r=0;
                dummy->next = new ListNode(temp);
            }
            l1=l1->next;
            l2=l2->next;
            dummy=dummy->next;
        }
        int p;
        while(l1!=nullptr){
            p=r+l1->val;
            if(p>=10){
                r=p/10;
                rem=p%10;
                dummy->next = new ListNode(rem);
            }
            else{
                r=0;
                dummy->next = new ListNode(p);
            }
            l1=l1->next;
            dummy=dummy->next;
        }
        while(l2!=nullptr){
            p=r+l2->val;
            if(p>=10){
                r=p/10;
                rem=p%10;
                dummy->next = new ListNode(rem);
            }
            else{
                r=0;
                dummy->next = new ListNode(p);
            }
            l2=l2->next;
            dummy=dummy->next;
        }
        if(r!=0){
            dummy->next = new ListNode(r);
        }
        return l3->next;
    }
};