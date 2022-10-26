// https://leetcode.com/problems/reverse-nodes-in-k-group/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return head;
        vector<int>s;
        vector<int>ss;
        int i,j,c=0;
        while(head)
        {
            c++;
            if(c==k)
            {
              
               ss.push_back(head->val);
                reverse(ss.begin(),ss.end());
                for(i=0;i<ss.size();i++) 
                s.push_back(ss[i]);
                ss.clear();
                c=0;
            }
            else{
                ss.push_back(head->val);
            }
            head=head->next;
        }
        for(i=0;i<ss.size();i++) 
                s.push_back(ss[i]);
        
        ListNode *t=new ListNode();
        head=t;
        for(i=0;i<s.size();i++)
        {
            ListNode *nn=new ListNode(s[i]);
            t->next=nn;
            t=nn;
        }
        return head->next;


        
    }
};