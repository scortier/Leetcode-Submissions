class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)
            return head;
        ListNode *node = head;
        int len = 1;
        while(node->next!=NULL){
            len++;
            node = node->next;
        }
        node->next = head;
        k = k%len;

        while(--len >= k){
            node = node->next;
        }
        ListNode *first = node->next;
        node->next = NULL;
        return first;
    } 
};