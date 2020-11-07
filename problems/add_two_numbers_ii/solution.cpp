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
    int c=0;
    int len1=0,len2=0;
public:
    void make(ListNode* p1, ListNode* p2,ListNode *node){
        if(p1->next==NULL && p2->next==NULL){
            int s = p1->val+p2->val;
            c = s/10;
            s = s%10;
            node->val = s;
            return;
        }

        int n1,n2;
        node->next = new ListNode(0);

        if(len1>len2){
            n1=p1->val,n2=0;
            --len1;
            make(p1->next,p2,node->next);
        }else if(len1<len2){
            n1=0,n2=p2->val;
            --len2;
            make(p1,p2->next,node->next);
        }else{
            n1=p1->val,n2=p2->val;
            --len1,--len2;
            make(p1->next,p2->next,node->next);
        }

        int s = n1+n2+c;
        c=s/10;
        s=s%10;
        node->val = s;
    }

    void callLen(ListNode* l1,ListNode* l2){
        if(!l1 && !l2)  return;
        if(!l1) ++len2,callLen(l1,l2->next);
        else if(!l2) ++len1,callLen(l1->next,l2);
        else ++len1,++len2,callLen(l1->next,l2->next);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        callLen(l1,l2);

        ListNode *head = new ListNode(0),*ans;
        ans=head;
        make(l1,l2,head);

        if(c) (ans = new ListNode(c))->next=head;
        return ans;
    }
};