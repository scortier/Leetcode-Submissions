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
    int findhgt(struct ListNode *start)
{
	struct ListNode *temp=start;
	int cnt=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		cnt++;
	}
	return cnt;
}

int find_data(struct ListNode *start,int h)
{
	int x=0,d;
	struct ListNode *t=start;
	while(t!=NULL && x!=h)
	{
		d=t->val;
		t=t->next;
		x++;
	}
	return d;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *first = head; 
        ListNode *second = head; 
        for (int i = 0; i < n; i++) 
        { 
            if (second->next == NULL)  
            { 
                if (i == n- 1) 
                    head = head->next; 
                return head; 
            } 
            second = second->next; 
        } 
  
        while (second->next != NULL) 
        { 
            first = first->next; 
            second = second->next; 
        } 
        first->next = first->next->next; 
        return head; 
     
    }
};
