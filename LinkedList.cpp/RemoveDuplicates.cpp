// from a sorted ll is toh easy cz can remove after checking
//if next is equal or not
//n keep deleting based on that

Node* curr=head;

if(curr==NULL){
    return NULL;
}

while(curr!=NULL){
    if(curr->next!=NULL && curr=curr->next){
        Node* next=curr->next->next;
        delete curr->next;
        curr->next=next;

    }
    else{
        curr=curr->next;

    }
    
    
}


///remove from unsorted list
// two for loops n keep checking
// n do the smae dleetion operations ferse


//more approaches

//sort kardo then delete
//but sort kaise karna hai?

//make a map visited wala




