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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* sentinel = new ListNode(0);
        ListNode* curr = sentinel;
        pair<ListNode*, int> curr_min = {new ListNode(INT_MAX), 0};
        while (curr_min.second != -1) {
            curr_min = {new ListNode(INT_MAX), -1};
            for (int i = 0; i < lists.size(); ++i) {
                if (lists[i] && lists[i]->val < curr_min.first->val) {
                    curr_min = {lists[i], i};
                }
            }
            if (curr_min.second != -1) {
                curr->next = new ListNode(curr_min.first->val);
                curr = curr->next;
                lists[curr_min.second] = lists[curr_min.second]->next;
            }
        }
        return sentinel->next;
    }
};