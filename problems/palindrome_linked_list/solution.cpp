class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode *cur = head, *pre = NULL;
        while (cur) {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }

    bool isPalindrome(ListNode* head) {
        int len = 0;        
        ListNode *cur = head;
        while (cur) ++len, cur = cur->next;

        cur = head;
        for (int i = 0; i < len / 2; ++i) cur = cur->next;
        ListNode *sec_head = reverse(cur);

        while (head && sec_head) {
            if (head->val != sec_head->val) return false;
            sec_head = sec_head->next;
            head = head->next;
        }

        return true;
    }
};