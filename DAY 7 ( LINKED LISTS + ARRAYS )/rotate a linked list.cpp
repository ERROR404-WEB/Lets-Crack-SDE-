// https://leetcode.com/problems/rotate-list/description/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode * t=head;
        if(!t) return t;
        vector<int>v;
        while(t)
        {
            v.push_back(t->val);
            t=t->next;
        }
        t=head;
        int i,j,n=v.size();
        k=k%n;
        for(i=n-k;i<n;i++,head=head->next) head->val=v[i];
        for(i=0;i<n-k;i++,head=head->next) head->val=v[i];
        return t;
    }
};