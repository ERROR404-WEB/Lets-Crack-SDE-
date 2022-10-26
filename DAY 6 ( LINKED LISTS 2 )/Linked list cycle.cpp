// https://leetcode.com/problems/linked-list-cycle/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* t1=head,*t2=head;
        if(head==NULL) return false;
        while(t2!=NULL and t2->next!=NULL)
        {
            t2=t2->next->next;
            t1=t1->next;
            if(t1==t2) return true;
        }
        return false;
    }
};