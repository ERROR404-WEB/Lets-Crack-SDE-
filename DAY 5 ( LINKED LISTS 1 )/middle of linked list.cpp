// https://leetcode.com/problems/middle-of-the-linked-list/description/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * temp=head;
        int height=0;
        while(temp)
        {
            height++;
            temp=temp->next;
        }
        height/=2;
        for(int i=0;i<height;i++) head=head->next;
        return head;
    }
};