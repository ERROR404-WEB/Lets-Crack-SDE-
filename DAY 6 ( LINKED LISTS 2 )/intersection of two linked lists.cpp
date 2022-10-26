// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        
		ListNode *temp;
		while(A != NULL)
        {
			temp = B;

			while(temp != NULL)
            {
				if(A == temp)
                {
					return A;
				}
				temp = temp -> next;
			}
			A = A -> next;
		}
		return NULL;
	}
};