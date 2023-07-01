/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

void insert(Node* &tail, Node* curr){
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node *head){
    // Write your code here.
    //switch links

    Node* zero=new Node(-1);
    Node* zerotail=zero;
    Node* one=new Node(-1);
    Node* onetail=one;
    Node* two=new Node(-1);
    Node* twotail=two;

    Node* curr=head;

    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insert(zerotail,curr);
        }
        else if(value==1){
            insert(onetail,curr);
        }
        else if(value==2){
            insert(twotail,curr);
        }
        curr=curr->next;
    }


    //merging all the three

    if(one->next!=NULL){
        zerotail->next=one->next;
        
    }
    
    else{
        zerotail->next=two->next;
    }
    
    onetail->next=two->next;
    
    twotail->next=NULL;

    head=zero->next;

    delete zero;
    delete one;
    delete two;


    return head;

    

    
}