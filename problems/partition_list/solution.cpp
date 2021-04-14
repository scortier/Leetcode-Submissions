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
    ListNode* partition(ListNode* head, int x) {
        ListNode *high_head = NULL, **low_tail_ptr = &head, **high_tail_ptr = &high_head;

        while(*low_tail_ptr) {
            while(*low_tail_ptr && (*low_tail_ptr)->val < x)
                low_tail_ptr = &(*low_tail_ptr)->next;

            *high_tail_ptr = *low_tail_ptr;

            while(*high_tail_ptr && (*high_tail_ptr)->val >= x)
                high_tail_ptr = &(*high_tail_ptr)->next;

            *low_tail_ptr = *high_tail_ptr;
        }

        *low_tail_ptr = high_head;

        return head;
    }
};