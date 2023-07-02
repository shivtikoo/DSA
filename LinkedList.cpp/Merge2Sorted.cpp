//APPPROACH

//EMPTY LIST
    //first list empty toh return second list
    //and vice versa

//head aur head next ke beech mai dusre list ka head ghus sakta hai check kaoro

//varna keep moving forward

//MY SOLUTION

#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* temp1=first;
    Node<int>* temp2=second;

    if(first==NULL){
        return second;
    }

    if(second==NULL){
        return first;
    }

    if(first->data<second->data){
        temp1=first;
        temp2=second;
    }
    else{
        temp1=second;
        temp2=first;
    }

    Node<int>* head=temp1;

    while(temp1->next!=NULL && temp2!=NULL){
        if(temp1->data<=temp2->data && temp1->next->data>temp2->data){
            Node<int>* x=temp1->next;
            temp1->next=temp2;
            temp2=temp2->next;
            temp1->next->next=x;

            temp1=temp1->next;
        }
        else{
            temp1=temp1->next;
        }
    }

    if(temp2!=NULL){
        temp1->next=temp2;

    }

    return head;
}
