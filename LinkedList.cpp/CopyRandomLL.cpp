//next ko point karta node and random pointer

// brute force toh copy karo aur ek aur loop mai steps lekar point karao

//optimised approach

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *random;
 *		Node() : data(0), next(nullptr), random(nullptr){};
 *		Node(int x) : data(x), next(nullptr), random(nullptr) {}
 *		Node(int x, Node *next, Node *random) : data(x), next(next), random(random) {}
 * };
 */
#include<bits/stdc++.h>


void insert( Node* &head, Node* &tail, int d ){
	Node* x= new Node(d);

	if(head==NULL){
		head=x;
		tail=x;
		return;
	}

	else{
		tail->next=x;
		tail=x;
	}
}

Node *cloneLL(Node *head){
	// Write your code here
	//APPROACH 02

	Node* temp=head;
	Node* anshead=NULL;
	Node* anstail=NULL;

	while(temp!=NULL){
		insert(anshead,anstail,temp->data);

		temp=temp->next;

	}

	// MAKE A MAP JO CLONE KE SAATH SAB MAPPED HAI
	unordered_map<Node*, Node*> mapping;

	Node* original=head;
	Node* clone=anshead;

	while(original!=NULL && clone!=NULL){
		mapping[original]=clone;
		original=original->next;
		clone=clone->next;
		
	}

    original=head;
    clone=anshead;


	//RANDOM

	while(original!=NULL){
		clone->random=mapping[original->random];
		original=original->next;
		clone=clone->next;
	}

	return anshead;

}

//APPROACH 03

//MAP KO HATA DIYA


/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *random;
 *		Node() : data(0), next(nullptr), random(nullptr){};
 *		Node(int x) : data(x), next(nullptr), random(nullptr) {}
 *		Node(int x, Node *next, Node *random) : data(x), next(next), random(random) {}
 * };
 */

void copy( Node* & head, Node* & tail, int d){
	Node* temp= new Node(d);

	if(head==NULL){
		head=temp;
		tail=temp;
		return;
	}

	else{
		tail->next=temp;
		tail=temp;
	}
} 


Node *cloneLL(Node *head){
	// Write your code here
	Node* anshead=NULL;
	Node* temp=head;
	Node* anstail=NULL;

    while (temp != NULL) {
          copy(anshead, anstail, temp->data);
          temp = temp->next;
    }

        // add clone nodes in between original nodes
	Node *original = head;
    Node *clone = anshead;

    while (original != NULL && clone != NULL){
		Node* next=original->next;
		original->next=clone;

			original=next;

			next=clone->next;
			clone->next=original;
			clone=next;
		}

		//COPY RANDOM POINTER

	temp=head;

		while(temp!=NULL){
			if(temp->next!=NULL){
				if(temp->random!=NULL){
					temp->next->random=temp->random->next;
				}
			}
			else{
				continue;
			}
			temp=temp->next->next;
		}

		original=head;
		clone=anshead;

		while(original!=NULL && clone!=NULL){
			original->next=clone->next;
			original=original->next;
			clone->next=original->next;
			clone=clone->next;
		}


	return anshead;




}


