// https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution {
public:
    void deleteNode(ListNode* node) {
       *node=*node->next;
    }
};