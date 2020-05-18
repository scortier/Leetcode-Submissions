// Author : Siddhant Khare
// Date : 18 may 2020


class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* now=head;
        ListNode* nh,*pre;
        vector<ListNode*> change(k);
        int j=0;
        while(now&&j<k-1){
            now=now->next;
            ++j;
        }
        if(j==k-1) nh=now;
        else return head;
        now=head;
        pre=nh;

        bool flag=true;
        while(flag&&now){
            for(int i=0;i<k;++i){
                if(now) {
                    change[i]=now;
                    now=now->next;
                }
                else {
                    flag=false;
                    break;
                }
            }
            if(!flag) break;
            pre->next=change[k-1];
            pre=change[0];
            pre->next=now;          
            for(int i=1;i<k;++i){
                change[i]->next=change[i-1];
            }
        }
        return nh;
    }
};