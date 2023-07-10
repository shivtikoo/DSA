//simple approach
node *findMid(node *head){

    node *s=head;
    node *f = head->next;

    while(f!=NULL and f->next!=NULL){

        s=s->next;
        f=f->next->next;

    }
    return s;
}


node *merge(node *left, node *right){

    if(left==NULL)
        return right;

    if(right==NULL)
        return left;

    node *ans = new node(-1);
    node *temp= ans;

    // merging the two lists
    while(left!=NULL and right!=NULL){

        if(left->data < right->data){

            temp->next=left;
            temp=left;
            left=left->next;

        }

        else{

            temp->next = right;
            temp=right;
            right=right->next;

        }

    }

    while(left!=NULL){

        temp->next=left;
        temp=left;
        left=left->next;

    }

    while(right!=NULL){

        temp->next=right;
        temp=right;
        right=right->next;

    }

    ans=ans->next;
    return ans;

}

node* mergeSort(node *head) {

    // base case
    if(head == NULL or head->next == NULL){
        return head;
    }

    // breaking the linked list into two halves

    node *mid = findMid(head);
    node *left = head;
    node *right = mid->next;

    mid->next = NULL;

    // recursive calls to sort the linked list

    left = mergeSort(left);
    right = mergeSort(right);

 
    // merging both left and right halves
    node *result = merge(left,right);
    return result;

}