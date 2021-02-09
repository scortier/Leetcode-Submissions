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
    bool isPalindrome(ListNode* head) {
    struct ListNode *temp=head;
	vector<int> v;
	int flag=0;
	while(temp!=NULL)
	{
		v.push_back(temp->val);
		temp=temp->next;
	}
	int i=0,j=v.size()-1;
	while(i<j)
	{
		if(v[i]!=v[j])
		{
			flag=1;
			break;
		}
		i++;
		j--;
	}
	if(flag==1)
	return false;
	else
	return true;
    }
};
