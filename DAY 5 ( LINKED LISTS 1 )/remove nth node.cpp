// https://leetcode.com/problems/remove-nth-node-from-end-of-list/


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* temp=head;
    int h=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        h++;
    }
    temp=head;
    if(h==1 && n==1) return NULL;
    if(h==0) return NULL;
    int pos1=h-n+1;
    int c=2;
    if(pos1==1)
    {
        head=head->next;
    return head;
    }
    while(c!=pos1)
    {
        temp=temp->next;
        c++;
    }
    temp->next=temp->next->next;
    return head;
}