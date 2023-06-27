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

void insert(Node* &head, int data){
    Node* temp= new Node(data);

    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deletion(int pos, Node* &head){
    if(pos==1){
        Node*temp=head;
        head->next=head;
        delete temp;
    }
    else{
        Node* curr=head;
        Node*prev=NULL;

        int count=1;

        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
        }

        prev->next=curr->next;
        delete curr;
    }



}

int main(){
    Node* head=new Node(11);
    insert(head,17);
    insert(head,19);

    print(head);

    deletion(3,head);
    print(head);

}