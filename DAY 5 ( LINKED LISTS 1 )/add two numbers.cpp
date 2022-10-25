// https://leetcode.com/problems/add-two-numbers/description/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0);
        ListNode *temp=head;

        int carry=0;
        while(l1!=NULL and l2!=NULL)
        {
                int sum=l1->val+l2->val;
                sum+=carry;
                carry=sum/10;
                sum=sum%10;
                
                ListNode *t=new ListNode(sum);
                head->next=t;
                head=head->next;

          
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
                int sum=l1->val;
                sum+=carry;
                carry=sum/10;
                sum=sum%10;
                
                ListNode *t=new ListNode(sum);
                head->next=t;
                head=head->next;


                 l1=l1->next;
        }
         while(l2)
        {
                int sum=l2->val;
                sum+=carry;
                carry=sum/10;
                sum=sum%10;
                
                ListNode *t=new ListNode(sum);
                head->next=t;
                head=head->next;

                l2=l2->next;
        }
        while(carry>0)
        {
                 int sum=0;
                sum+=carry;
                carry=sum/10;
                sum=sum%10;
                
                ListNode *t=new ListNode(sum);
                head->next=t;
                head=head->next;

        }
        return temp->next;


    }
};