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

void insert(Node* &head, int data){
    Node* temp=new Node(data);

    head->prev=temp;
    temp->next=head;
    head=temp;
}

void insertTail(Node* &tail, int data){
    Node*temp=new Node(data);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;


}

void insertPos(Node* &head, int data, int pos){
    Node* temp = new Node(data);
    if(pos==1){
        insert(head,data);
    }

    int count=1;
    Node* prev = head;

    while(count<pos-1){
        prev=prev->next;
        count++;
    }
    
    temp->prev=prev;
    temp->next=prev->next;
    prev->next=temp;
    prev->next->prev=temp;

}

int main(){
    Node* head= new Node(12);
    Node* tail= head;
    print(head);

    cout<<getlen(head)<<endl;

    insert(head,11);

    print(head);

    insertTail(tail,13);

    print(head);

    insertPos(head,14,3);

    print(head);

}