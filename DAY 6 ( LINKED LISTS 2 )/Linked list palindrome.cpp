// https://leetcode.com/problems/palindrome-linked-list/description/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
        vector<int>vv(v);
        reverse(v.begin(),v.end());
        return v==vv;
    }
};