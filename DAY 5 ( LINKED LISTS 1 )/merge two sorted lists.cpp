// https://leetcode.com/problems/merge-two-sorted-lists


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
    if(l1==NULL) return l2;
    else if(l2==NULL) return l1;

    ListNode *head = new ListNode();
    ListNode * temp=head;
    while(l1!=NULL and l2!=NULL)
    {
            if(l1->val >l2->val)
            {
                ListNode *t=new ListNode(l2->val);
                l2=l2->next;
                head->next=t;
                head=head->next;
            }
            else{
                ListNode *t=new ListNode(l1->val);
                l1=l1->next;
                head->next=t;
                head=head->next;
            }
    }
    while(l1!=NULL)
    {
                ListNode *t=new ListNode(l1->val);
                l1=l1->next;
                head->next=t;
                head=head->next;
    }
    while(l2!=NULL)
    {
                ListNode *t=new ListNode(l2->val);
                l2=l2->next;
                head->next=t;
                head=head->next;
    }
    return temp->next;
    }
};