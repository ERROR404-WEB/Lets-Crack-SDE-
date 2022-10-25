// https://leetcode.com/problems/reverse-linked-list/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>v;
        ListNode * temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        temp=head;
        int i=0;
        while(temp)
        {
            temp->val=v[i++];
            temp=temp->next;
        }
        return head;
    }
};