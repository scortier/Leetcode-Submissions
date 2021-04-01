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
    ListNode *reverse(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = NULL;
        while(curr)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = head;
        while(slow && fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *stop = slow;
        slow = reverse(slow);
        while(temp!=stop && slow)
        {
            if(temp->val != slow->val)
            {
                return false;
            }
            temp = temp->next;
            slow = slow->next;
        }
        return true;
    }
};