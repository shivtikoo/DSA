#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};

void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlen(Node* head){
    Node* temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
        
    }
    return count;
}

int main(){
    Node* head= new Node(12);
    print(head);

    cout<<getlen(head)<<endl;

}