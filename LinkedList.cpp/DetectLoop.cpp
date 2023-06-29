#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool detectAndRemoveCycle(Node* head)
{
    // Write your code here
    if(head == NULL)
        return false;
    Node* slow = head;
    Node* fast = head;
    Node* fast_p = NULL;


    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast_p = fast->next;
        fast = fast->next->next;
        if(fast == slow)
            break;
    }
    if(slow != fast)
        return false;
    slow = head;
    while(slow != fast)
    {
        slow = slow->next;
        fast_p = fast;
        fast = fast->next;
    }
    fast_p->next = NULL;
    return true;
}
