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

//ONLY USE TAIL POINTER

void insert(Node* &tail, int data){

    Node* temp= new Node(data);

    temp->next=tail->next;
    tail->next=temp;

    tail=temp;

}

void print(Node* tail){

    Node*temp=tail;

    while(temp->next!=tail){
        
        cout<<temp->data<<" ";ww
        temp=temp->next;

    }
    //dp while loop os also an interesting concept
    cout<<endl;


}

int main(){
    
    //last node ko simply point karao to first node
    Node* tail= new Node(7);

    insert(tail,11);
    insert(tail,13);


    print(tail);


}