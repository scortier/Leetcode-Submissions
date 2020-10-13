ListNode* findMiddle(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode* slow = head, *fast = head->next;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* tmp = slow->next;
    slow->next = NULL;
    return tmp;
}

ListNode* mergeListsHelp(ListNode* l1, ListNode* l2) {
    ListNode* pre = new ListNode(0);
    ListNode* f = pre;
    while(l1 || l2) {
        if(!l1 || (l2&&l2->val <= l1->val)) {
            pre->next = l2;
            pre = pre->next;
            l2 = l2->next;
        } else{
            pre->next = l1;
            pre = pre->next;
            l1 = l1->next;
        }
    }
    pre->next = NULL;
    return f->next;
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
    ListNode* right = findMiddle(head);
    return mergeListsHelp(sortList(head), sortList(right));
        
    }
};