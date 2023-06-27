#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;

    }

    
};



void insertTail(Node* &tail, int data){
    Node*temp=new Node(data);

    tail->next=temp;
    tail=temp;

}

void insert(Node* &head, int data){
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
}

void insertAtPos(Node* &head,int pos, int data){

    if(pos==1){
        insert(head,data);
        return;
    }
    Node* prev = head;
    int count=1;

    while(count<pos-1){
        prev=prev->next;
        count++;
    }

    Node* temp= new Node(data);
    temp->next=prev->next;
    prev->next=temp;
}

//TRAVERSING A LINKED LIST

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node* n1= new Node(10);

    Node* head=n1;
    Node* tail=n1;

    insertTail(tail,12);
    insertTail(tail,15);

    insertAtPos(head,4,22);

    print(head);




}