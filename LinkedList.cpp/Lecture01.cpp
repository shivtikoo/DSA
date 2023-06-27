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



int main(){
    //linear data structure made of nodes
    //collection of nodes
    //data hota hai and address of next node

    //WHY?
        //cant change size at run time- array
        //vector mai memory wastage

    //DYNAMIC DATA STRUCTURE
    //DELETION INSERTION EASIER CZ NO SHIFT REQUIRED
    //CONTINOUS MEMORY ALLOCATION BHI NOT NEEDED

    //TYPES
        //SINGLY LL
        //DOUBLY LL
        //CIRCULAR LL
        //CIRCULAR DOUBLY LL


    Node* node1=new Node(10);

    cout<<node1->data<<endl;


    







    

}